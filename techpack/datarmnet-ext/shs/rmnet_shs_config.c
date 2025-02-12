/* Copyright (c) 2018-2020 The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#include <linux/kernel.h>
#include <linux/netdevice.h>
#include <linux/module.h>
#include "../../datarmnet/core/rmnet_map.h"
#include "../../datarmnet/core/rmnet_private.h"
#include "rmnet_shs_config.h"
#include "rmnet_shs.h"
#include "rmnet_shs_wq.h"
#include "rmnet_shs_wq_genl.h"
#include "rmnet_shs_common.h"
#include "rmnet_shs_modules.h"
static int DATARMNETe9173bbe0e(struct notifier_block*DATARMNET272c159b3c,
unsigned long DATARMNET7f045a1e6e,void*data);static struct notifier_block 
DATARMNET5fc54f7a13 __read_mostly={.notifier_call=DATARMNETe9173bbe0e,.priority=
(0xd1f+216-0xdf5),};static const char*DATARMNETbc8418e817[]={"\x39\x37\x33\x31",
"\x49\x31\x36\x33\x62\x30\x30\x32\x33\x33\x34\x33\x39\x65\x64\x65\x61\x64\x32\x35\x30\x38\x66\x36\x33\x37\x36\x36\x64\x33\x35\x33\x31\x30\x35\x33\x62\x64\x35\x37\x62"
,
"\x49\x38\x38\x63\x62\x39\x33\x38\x31\x66\x32\x34\x38\x34\x62\x31\x63\x32\x37\x36\x32\x64\x30\x63\x62\x34\x62\x62\x30\x35\x64\x33\x31\x30\x64\x61\x32\x62\x65\x35\x65"
,
"\x49\x31\x30\x34\x31\x36\x39\x33\x64\x35\x35\x31\x37\x30\x33\x62\x63\x38\x33\x35\x65\x63\x66\x62\x33\x31\x31\x30\x65\x66\x65\x63\x35\x30\x32\x30\x34\x63\x37\x36\x39"
,
"\x49\x30\x61\x32\x63\x61\x34\x36\x35\x34\x30\x30\x33\x35\x64\x62\x31\x39\x37\x65\x39\x37\x38\x62\x62\x33\x35\x62\x39\x30\x31\x35\x30\x64\x36\x37\x64\x35\x34\x35\x66"
,
"\x49\x66\x66\x36\x31\x30\x32\x65\x34\x38\x64\x34\x31\x35\x34\x30\x36\x36\x61\x64\x64\x65\x64\x33\x31\x35\x31\x32\x37\x32\x34\x39\x62\x37\x39\x66\x30\x66\x30\x62\x65"
,
"\x49\x36\x66\x31\x39\x39\x34\x35\x37\x30\x38\x38\x63\x39\x66\x33\x33\x64\x36\x39\x31\x39\x32\x64\x64\x32\x34\x33\x36\x30\x62\x39\x35\x37\x31\x38\x64\x62\x35\x34\x64"
,
"\x49\x35\x65\x30\x32\x34\x66\x38\x66\x30\x64\x31\x61\x66\x61\x38\x36\x33\x37\x33\x35\x33\x62\x31\x64\x62\x38\x62\x65\x37\x37\x34\x35\x30\x65\x32\x31\x36\x39\x36\x32"
,
"\x49\x36\x39\x37\x38\x32\x62\x61\x63\x34\x30\x64\x38\x64\x32\x62\x39\x62\x61\x63\x39\x64\x61\x64\x30\x30\x65\x64\x30\x63\x66\x62\x65\x64\x30\x63\x37\x35\x32\x30\x32"
,
"\x49\x65\x64\x36\x62\x63\x38\x64\x37\x35\x36\x61\x65\x62\x65\x39\x39\x39\x65\x66\x64\x62\x30\x35\x61\x37\x37\x38\x39\x64\x36\x34\x36\x31\x31\x35\x64\x66\x35\x31\x39"
,
"\x49\x38\x38\x66\x32\x37\x65\x64\x36\x62\x35\x34\x65\x31\x61\x32\x64\x65\x31\x66\x35\x62\x31\x35\x63\x62\x65\x37\x35\x65\x38\x30\x38\x62\x38\x37\x33\x36\x31\x61\x32"
,};static int DATARMNET2cb9ae589c;int __init DATARMNET163e93649e(void){pr_info(
"\x25\x73\x28\x29\x3a\x20\x53\x74\x61\x72\x74\x69\x6e\x67\x20\x72\x6d\x6e\x65\x74\x20\x53\x48\x53\x20\x6d\x6f\x64\x75\x6c\x65\x20\x25\x73\x20" "\n"
,__func__,DATARMNETbc8418e817[(0xd2d+202-0xdf7)]);trace_rmnet_shs_high(
DATARMNET1790979ccf,DATARMNET72cb00fdc0,(0x16e8+787-0xc0c),(0x16e8+787-0xc0c),
(0x16e8+787-0xc0c),(0x16e8+787-0xc0c),NULL,NULL);if(DATARMNET0dbc627e8f()){
rm_err("\x25\x73",
"\x53\x48\x53\x5f\x47\x4e\x4c\x3a\x20\x46\x61\x69\x6c\x65\x64\x20\x74\x6f\x20\x69\x6e\x69\x74\x20\x67\x65\x6e\x65\x72\x69\x63\x20\x6e\x65\x74\x6c\x69\x6e\x6b"
);}return register_netdevice_notifier(&DATARMNET5fc54f7a13);}void __exit 
DATARMNETf3298dab6f(void){trace_rmnet_shs_high(DATARMNET1790979ccf,
DATARMNET89958f9b63,(0x16e8+787-0xc0c),(0x16e8+787-0xc0c),(0x16e8+787-0xc0c),
(0x16e8+787-0xc0c),NULL,NULL);unregister_netdevice_notifier(&DATARMNET5fc54f7a13
);DATARMNETeabd69d1ab();pr_info(
"\x25\x73\x28\x29\x3a\x20\x45\x78\x69\x74\x69\x6e\x67\x20\x72\x6d\x6e\x65\x74\x20\x53\x48\x53\x20\x6d\x6f\x64\x75\x6c\x65" "\n"
,__func__);}static int DATARMNETe9173bbe0e(struct notifier_block*
DATARMNET272c159b3c,unsigned long DATARMNET7f045a1e6e,void*data){struct 
net_device*dev=netdev_notifier_info_to_dev(data);struct rmnet_priv*priv;struct 
rmnet_port*port;int ret=(0xd2d+202-0xdf7);if(!dev){DATARMNET68d84e7b98[
DATARMNETf5157a9b85]++;return NOTIFY_DONE;}if(!(strncmp(dev->name,
"\x72\x6d\x6e\x65\x74\x5f\x64\x61\x74\x61",(0xd27+224-0xdfd))==(0xd2d+202-0xdf7)
||strncmp(dev->name,"\x72\x5f\x72\x6d\x6e\x65\x74\x5f\x64\x61\x74\x61",
(0xd19+238-0xdfb))==(0xd2d+202-0xdf7)))return NOTIFY_DONE;switch(
DATARMNET7f045a1e6e){case NETDEV_UNREGISTER:DATARMNETd6ee05f1b4(dev);
DATARMNET2cb9ae589c--;if(!DATARMNET2cb9ae589c&&DATARMNETecc0627c70.
DATARMNETfc89d842ae){unsigned int DATARMNET9f4bc49c6f;pr_info(
"\x72\x6d\x6e\x65\x74\x5f\x73\x68\x73\x20\x64\x65\x69\x6e\x69\x74\x20\x25\x73\x20\x67\x6f\x69\x6e\x67\x20\x64\x6f\x77\x6e\x20"
,dev->name);RCU_INIT_POINTER(rmnet_shs_skb_entry,NULL);
qmi_rmnet_ps_ind_deregister(DATARMNETecc0627c70.port,&DATARMNETecc0627c70.
rmnet_idl_ind_cb);DATARMNETeacad8334e();DATARMNET9f4bc49c6f=DATARMNET02cdd9b125(
);DATARMNETf7dcab9a9e();DATARMNET9297340f58(DATARMNET9f4bc49c6f);
trace_rmnet_shs_high(DATARMNET1790979ccf,DATARMNET443dab7031,(0x16e8+787-0xc0c),
(0x16e8+787-0xc0c),(0x16e8+787-0xc0c),(0x16e8+787-0xc0c),NULL,NULL);}break;case 
NETDEV_REGISTER:DATARMNET2cb9ae589c++;if(DATARMNET2cb9ae589c&&!
DATARMNETecc0627c70.DATARMNETfc89d842ae){pr_info(
"\x72\x6d\x6e\x65\x74\x5f\x73\x68\x73\x20\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x69\x6e\x67\x20\x25\x73"
,dev->name);priv=netdev_priv(dev);port=rmnet_get_port(priv->real_dev);if(!port){
pr_err(
"\x72\x6d\x6e\x65\x74\x5f\x73\x68\x73\x3a\x20\x69\x6e\x76\x61\x6c\x69\x64\x20\x72\x6d\x6e\x65\x74\x5f\x70\x6f\x72\x74"
);break;}DATARMNET45d8cdb224(priv->real_dev,dev);DATARMNET3ae0d614d6(priv->
real_dev);DATARMNETe1f95274f1();DATARMNETecc0627c70.DATARMNETf5ab31b9b0=
(0xd26+209-0xdf6);}DATARMNET7492293980(dev);break;case NETDEV_UP:if(!
DATARMNETecc0627c70.DATARMNET9c869c1ec2&&DATARMNETecc0627c70.DATARMNETfc89d842ae
){port=DATARMNETecc0627c70.port;if(!port){pr_err(
"\x72\x6d\x6e\x65\x74\x5f\x73\x68\x73\x3a\x20\x69\x6e\x76\x61\x6c\x69\x64\x20\x72\x6d\x6e\x65\x74\x5f\x63\x66\x67\x5f\x70\x6f\x72\x74"
);break;}DATARMNETecc0627c70.DATARMNET08dbb5ab35.priority=RMNET_SHS;if(port->
data_format&RMNET_INGRESS_FORMAT_DL_MARKER_V2){DATARMNETecc0627c70.
DATARMNET08dbb5ab35.dl_hdr_handler_v2=&DATARMNET78bb6be330;DATARMNETecc0627c70.
DATARMNET08dbb5ab35.dl_trl_handler_v2=&DATARMNETf61cd23b90;}DATARMNETecc0627c70.
rmnet_idl_ind_cb.ps_on_handler=&DATARMNET7f1d9480cb;DATARMNETecc0627c70.
rmnet_idl_ind_cb.ps_off_handler=&DATARMNETa4bd2ef52c;ret=
rmnet_map_dl_ind_register(port,&DATARMNETecc0627c70.DATARMNET08dbb5ab35);if(ret)
pr_err(
"\x25\x73\x28\x29\x3a\x20\x72\x6d\x6e\x65\x74\x20\x64\x6c\x5f\x69\x6e\x64\x20\x72\x65\x67\x69\x73\x74\x72\x61\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c" "\n"
,__func__);ret=qmi_rmnet_ps_ind_register(port,&DATARMNETecc0627c70.
rmnet_idl_ind_cb);if(ret)pr_err(
"\x25\x73\x28\x29\x3a\x20\x72\x6d\x6e\x65\x74\x20\x70\x73\x5f\x69\x6e\x64\x20\x72\x65\x67\x69\x73\x74\x72\x61\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c" "\n"
,__func__);DATARMNET039ac6d55d();DATARMNETe46c480d71();DATARMNET0a6fb12cb2();
DATARMNETecc0627c70.DATARMNET9c869c1ec2=(0xd26+209-0xdf6);trace_rmnet_shs_high(
DATARMNET1790979ccf,DATARMNET443dab7031,(0x16e8+787-0xc0c),(0x16e8+787-0xc0c),
(0x16e8+787-0xc0c),(0x16e8+787-0xc0c),NULL,NULL);RCU_INIT_POINTER(
rmnet_shs_skb_entry,DATARMNET756778f14f);}break;default:break;}return 
NOTIFY_DONE;}module_init(DATARMNET163e93649e);module_exit(DATARMNETf3298dab6f);
