#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/usb.h>


static int pen_probe(struct usb_interface *interface,const struct usb_device_id *id)
{
printk(KERN_INFO "[*]usb (%04X:%04X)plugged\n",id->idVendor,id->idProduct);
return 0;
}

static void pen_disconnect(struct usb_interface *interface)
{
printk(KERN_INFO"Removed USB\n");
}

static struct usb_device_id pen_table[]=
{
{USB_DEVICE(0x0781,0x557d)},
{}
};

MODULE_DEVICE_TABLE(usb,pen_table);

static struct usb_driver pen_driver =
{
.name="USB",
.id_table=pen_table,
.probe=pen_probe,
.disconnect=pen_disconnect,
};

static int __init pen_init(void)
{
int ret =-1;
printk(KERN_INFO"[*]Constructor of Driver\n");
printk(KERN_INFO"Registering with Kernel");
ret=usb_register(&pen_driver);
printk(KERN_INFO"Registration complete");
return ret;
}

static void __exit pen_exit(void)
{
printk(KERN_INFO"[*]Destruction of driver\n");
usb_deregister(&pen_driver);
printk(KERN_INFO"Unregister Complete");
}
module_init(pen_init);
module_exit(pen_exit);
