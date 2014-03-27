/* This file is automatically generated by configure.  Do not modify by hand. */
/*#include "mibgroup/default_modules.h"*/
/*#include "mibgroup/snmpv3mibs.h"*/
/*#include "mibgroup/mibII.h"*/
/*#include "mibgroup/ucd_snmp.h"*/
/*#include "mibgroup/notification.h"*/
/*#include "mibgroup/notification-log-mib.h"*/
/*#include "mibgroup/target.h"*/
/*#include "mibgroup/agent_mibs.h"*/
/*#include "mibgroup/agentx.h"*/
/*#include "mibgroup/disman/event.h"*/
/*#include "mibgroup/disman/schedule.h"*/
/*#include "mibgroup/utilities.h"*/
/*#include "mibgroup/host.h"*/
#include "mibgroup/snmpv3/snmpMPDStats_5_5.h"
#include "mibgroup/snmpv3/usmStats_5_5.h"
#include "mibgroup/snmpv3/snmpEngine.h"
#include "mibgroup/snmpv3/usmUser.h"
#include "mibgroup/mibII/snmp_mib_5_5.h"
#include "mibgroup/mibII/system_mib.h"
#include "mibgroup/mibII/sysORTable.h"
#include "mibgroup/mibII/at.h"
/*#include "mibgroup/mibII/ifTable.h"*/
#include "mibgroup/mibII/ip.h"
#include "mibgroup/mibII/tcp.h"
#include "mibgroup/mibII/icmp.h"
#include "mibgroup/mibII/udp.h"
#include "mibgroup/mibII/vacm_vars.h"
#include "mibgroup/mibII/setSerialNo.h"
/*#include "mibgroup/if-mib.h"*/
/*#include "mibgroup/ip-mib.h"*/
/*#include "mibgroup/ip-forward-mib.h"*/
/*#include "mibgroup/tcp-mib.h"*/
/*#include "mibgroup/udp-mib.h"*/
#include "mibgroup/ucd-snmp/disk_hw.h"
#include "mibgroup/ucd-snmp/proc.h"
#include "mibgroup/ucd-snmp/versioninfo.h"
#include "mibgroup/ucd-snmp/pass.h"
#include "mibgroup/ucd-snmp/pass_persist.h"
#include "mibgroup/ucd-snmp/loadave.h"
#include "mibgroup/agent/extend.h"
#include "mibgroup/ucd-snmp/errormib.h"
#include "mibgroup/ucd-snmp/file.h"
#include "mibgroup/ucd-snmp/dlmod.h"
#include "mibgroup/ucd-snmp/proxy.h"
#include "mibgroup/ucd-snmp/logmatch.h"
#include "mibgroup/ucd-snmp/memory.h"
#include "mibgroup/ucd-snmp/vmstat.h"
#include "mibgroup/notification/snmpNotifyTable.h"
/*#include "mibgroup/snmp-notification-mib/snmpNotifyFilterTable.h"*/
#include "mibgroup/notification/snmpNotifyFilterProfileTable.h"
#include "mibgroup/notification-log-mib/notification_log.h"
#include "mibgroup/target/target_counters_5_5.h"
#include "mibgroup/target/snmpTargetAddrEntry.h"
#include "mibgroup/target/snmpTargetParamsEntry.h"
/*#include "mibgroup/target/target.h"*/
#include "mibgroup/agent/nsTransactionTable.h"
#include "mibgroup/agent/nsModuleTable.h"
#include "mibgroup/agent/nsDebug.h"
#include "mibgroup/agent/nsCache.h"
#include "mibgroup/agent/nsLogging.h"
#include "mibgroup/agent/nsVacmAccessTable.h"
#include "mibgroup/disman/event/mteScalars.h"
#include "mibgroup/disman/event/mteTrigger.h"
#include "mibgroup/disman/event/mteTriggerTable.h"
#include "mibgroup/disman/event/mteTriggerDeltaTable.h"
#include "mibgroup/disman/event/mteTriggerExistenceTable.h"
#include "mibgroup/disman/event/mteTriggerBooleanTable.h"
#include "mibgroup/disman/event/mteTriggerThresholdTable.h"
#include "mibgroup/disman/event/mteTriggerConf.h"
#include "mibgroup/disman/event/mteEvent.h"
#include "mibgroup/disman/event/mteEventTable.h"
#include "mibgroup/disman/event/mteEventSetTable.h"
#include "mibgroup/disman/event/mteEventNotificationTable.h"
#include "mibgroup/disman/event/mteEventConf.h"
#include "mibgroup/disman/event/mteObjects.h"
#include "mibgroup/disman/event/mteObjectsTable.h"
#include "mibgroup/disman/event/mteObjectsConf.h"
#include "mibgroup/disman/schedule/schedCore.h"
#include "mibgroup/disman/schedule/schedConf.h"
#include "mibgroup/disman/schedule/schedTable.h"
#include "mibgroup/utilities/override.h"
#include "mibgroup/host/hrh_storage.h"
#include "mibgroup/host/hrh_filesys.h"
#include "mibgroup/host/hrSWInstalledTable.h"
#include "mibgroup/host/hrSWRunTable.h"
#include "mibgroup/host/hr_system.h"
#include "mibgroup/host/hr_device.h"
#include "mibgroup/host/hr_other.h"
#include "mibgroup/host/hr_proc.h"
#include "mibgroup/host/hr_network.h"
#include "mibgroup/host/hr_print.h"
#include "mibgroup/host/hr_disk.h"
#include "mibgroup/host/hr_partition.h"
/*#include "mibgroup/util_funcs/header_generic.h"*/
/*#include "mibgroup/mibII/updates.h"*/
/*#include "mibgroup/util_funcs.h"*/
/*#include "mibgroup/if-mib/ifTable.h"*/
/*#include "mibgroup/mibII/kernel_linux.h"*/
/*#include "mibgroup/mibII/ipAddr.h"*/
#include "mibgroup/mibII/var_route.h"
/*#include "mibgroup/mibII/route_write.h"*/
#include "mibgroup/mibII/tcpTable.h"
#include "mibgroup/mibII/udpTable.h"
#include "mibgroup/mibII/vacm_context.h"
/*#include "mibgroup/if-mib/ifXTable.h"*/
/*#include "mibgroup/ip-mib/ipAddressTable.h"*/
/*#include "mibgroup/ip-mib/ipAddressPrefixTable.h"*/
/*#include "mibgroup/ip-mib/ipDefaultRouterTable.h"*/
/*#include "mibgroup/ip-mib/inetNetToMediaTable.h"*/
/*#include "mibgroup/ip-mib/ipSystemStatsTable.h"*/
#include "mibgroup/ip-mib/ip_scalars.h"
/*#include "mibgroup/ip-mib/ipv6ScopeZoneIndexTable.h"*/
/*#include "mibgroup/ip-mib/ipIfStatsTable.h"*/
/*#include "mibgroup/ip-forward-mib/ipCidrRouteTable.h"*/
/*#include "mibgroup/ip-forward-mib/inetCidrRouteTable.h"*/
/*#include "mibgroup/tcp-mib/tcpConnectionTable.h"*/
/*#include "mibgroup/tcp-mib/tcpListenerTable.h"*/
/*#include "mibgroup/udp-mib/udpEndpointTable.h"*/
/*#include "mibgroup/util_funcs/header_simple_table.h"*/
/*#include "mibgroup/hardware/fsys.h"*/
/*#include "mibgroup/util_funcs/restart.h"*/
/*#include "mibgroup/ucd-snmp/pass_common.h"*/
/*#include "mibgroup/hardware/memory.h"*/
/*#include "mibgroup/hardware/cpu.h"*/
/*#include "mibgroup/header_complex.h"*/
#include "mibgroup/snmp-notification-mib/snmpNotifyFilterTable/snmpNotifyFilterTable.h"
#include "mibgroup/host/data_access/swinst.h"
#include "mibgroup/host/data_access/swrun.h"
#include "mibgroup/host/hrSWRunPerfTable.h"
#include "mibgroup/if-mib/ifTable/ifTable.h"
#include "mibgroup/if-mib/ifXTable/ifXTable.h"
#include "mibgroup/ip-mib/ipAddressTable/ipAddressTable.h"
#include "mibgroup/ip-mib/ipAddressPrefixTable/ipAddressPrefixTable.h"
#include "mibgroup/ip-mib/ipDefaultRouterTable/ipDefaultRouterTable.h"
/*#include "mibgroup/ip-mib/data_access/arp.h"*/
#include "mibgroup/ip-mib/inetNetToMediaTable/inetNetToMediaTable.h"
/*#include "mibgroup/ip-mib/inetNetToMediaTable/inetNetToMediaTable_interface.h"*/
/*#include "mibgroup/ip-mib/inetNetToMediaTable/inetNetToMediaTable_data_access.h"*/
/*#include "mibgroup/ip-mib/data_access/systemstats.h"*/
#include "mibgroup/ip-mib/ipSystemStatsTable/ipSystemStatsTable.h"
/*#include "mibgroup/ip-mib/ipSystemStatsTable/ipSystemStatsTable_interface.h"*/
/*#include "mibgroup/ip-mib/ipSystemStatsTable/ipSystemStatsTable_data_access.h"*/
/*#include "mibgroup/ip-mib/data_access/scalars_common.h"*/
#include "mibgroup/ip-mib/ipv6ScopeZoneIndexTable/ipv6ScopeZoneIndexTable.h"
#include "mibgroup/ip-mib/ipIfStatsTable/ipIfStatsTable.h"
/*#include "mibgroup/ip-mib/ipIfStatsTable/ipIfStatsTable_interface.h"*/
/*#include "mibgroup/ip-mib/ipIfStatsTable/ipIfStatsTable_data_access.h"*/
#include "mibgroup/ip-forward-mib/ipCidrRouteTable/ipCidrRouteTable.h"
#include "mibgroup/ip-forward-mib/inetCidrRouteTable/inetCidrRouteTable.h"
/*#include "mibgroup/tcp-mib/data_access/tcpConn.h"*/
#include "mibgroup/tcp-mib/tcpConnectionTable/tcpConnectionTable.h"
#include "mibgroup/tcp-mib/tcpListenerTable/tcpListenerTable.h"
#include "mibgroup/udp-mib/udpEndpointTable/udpEndpointTable.h"
#include "mibgroup/hardware/fsys/hw_fsys.h"
/*#include "mibgroup/hardware/fsys/fsys_mntent.h"*/
#include "mibgroup/hardware/memory/hw_mem.h"
/*#include "mibgroup/hardware/memory/memory_linux.h"*/
#include "mibgroup/hardware/cpu/cpu.h"
#include "mibgroup/hardware/cpu/cpu_linux.h"
/*#include "mibgroup/snmp-notification-mib/snmpNotifyFilterTable/snmpNotifyFilterTable_interface.h"*/
/*#include "mibgroup/snmp-notification-mib/snmpNotifyFilterTable/snmpNotifyFilterTable_data_access.h"*/
/*#include "mibgroup/host/data_access/swinst_pkginfo.h"*/
/*#include "mibgroup/host/data_access/swrun_procfs_status.h"*/
#include "mibgroup/if-mib/data_access/interface.h"
/*#include "mibgroup/if-mib/ifTable/ifTable_interface.h"*/
/*#include "mibgroup/if-mib/ifTable/ifTable_data_access.h"*/
/*#include "mibgroup/if-mib/ifXTable/ifXTable_interface.h"*/
/*#include "mibgroup/if-mib/ifXTable/ifXTable_data_access.h"*/
/*#include "mibgroup/ip-mib/data_access/ipaddress.h"*/
/*#include "mibgroup/ip-mib/ipAddressTable/ipAddressTable_interface.h"*/
/*#include "mibgroup/ip-mib/ipAddressTable/ipAddressTable_data_access.h"*/
/*#include "mibgroup/ip-mib/ipAddressPrefixTable/ipAddressPrefixTable_interface.h"*/
/*#include "mibgroup/ip-mib/ipAddressPrefixTable/ipAddressPrefixTable_data_access.h"*/
/*#include "mibgroup/ip-mib/data_access/defaultrouter.h"*/
/*#include "mibgroup/ip-mib/ipDefaultRouterTable/ipDefaultRouterTable_interface.h"*/
/*#include "mibgroup/ip-mib/ipDefaultRouterTable/ipDefaultRouterTable_data_access.h"*/
/*#include "mibgroup/ip-mib/ipDefaultRouterTable/ipDefaultRouterTable_data_get.h"*/
/*#include "mibgroup/ip-mib/data_access/arp_common.h"*/
/*#include "mibgroup/ip-mib/data_access/arp_netlink.h"*/
/*#include "mibgroup/ip-mib/data_access/systemstats_common.h"*/
/*#include "mibgroup/ip-mib/data_access/systemstats_linux.h"*/
/*#include "mibgroup/ip-mib/data_access/scalars_linux.h"*/
/*#include "mibgroup/ip-mib/data_access/ipv6scopezone.h"*/
/*#include "mibgroup/ip-mib/ipv6ScopeZoneIndexTable/ipv6ScopeZoneIndexTable_interface.h"*/
/*#include "mibgroup/ip-mib/ipv6ScopeZoneIndexTable/ipv6ScopeZoneIndexTable_data_access.h"*/
/*#include "mibgroup/ip-mib/ipIfStatsTable/ipIfStatsTable_data_get.h"*/
/*#include "mibgroup/ip-forward-mib/data_access/route.h"*/
/*#include "mibgroup/ip-forward-mib/ipCidrRouteTable/ipCidrRouteTable_interface.h"*/
/*#include "mibgroup/ip-forward-mib/ipCidrRouteTable/ipCidrRouteTable_data_access.h"*/
/*#include "mibgroup/ip-forward-mib/inetCidrRouteTable/inetCidrRouteTable_interface.h"*/
/*#include "mibgroup/ip-forward-mib/inetCidrRouteTable/inetCidrRouteTable_data_access.h"*/
/*#include "mibgroup/tcp-mib/data_access/tcpConn_common.h"*/
/*#include "mibgroup/tcp-mib/data_access/tcpConn_linux.h"*/
/*#include "mibgroup/util_funcs/get_pid_from_inode.h"*/
/*#include "mibgroup/tcp-mib/tcpConnectionTable/tcpConnectionTable_interface.h"*/
/*#include "mibgroup/tcp-mib/tcpConnectionTable/tcpConnectionTable_data_access.h"*/
/*#include "mibgroup/tcp-mib/tcpListenerTable/tcpListenerTable_interface.h"*/
/*#include "mibgroup/tcp-mib/tcpListenerTable/tcpListenerTable_data_access.h"*/
/*#include "mibgroup/udp-mib/data_access/udp_endpoint.h"*/
/*#include "mibgroup/udp-mib/udpEndpointTable/udpEndpointTable_interface.h"*/
/*#include "mibgroup/udp-mib/udpEndpointTable/udpEndpointTable_data_access.h"*/
/*#include "mibgroup/if-mib/data_access/interface_linux.h"*/
/*#include "mibgroup/if-mib/data_access/interface_ioctl.h"*/
/*#include "mibgroup/ip-mib/data_access/ipaddress_common.h"*/
/*#include "mibgroup/ip-mib/data_access/ipaddress_linux.h"*/
/*#include "mibgroup/ip-mib/data_access/defaultrouter_common.h"*/
/*#include "mibgroup/ip-mib/data_access/defaultrouter_linux.h"*/
/*#include "mibgroup/ip-mib/data_access/ipv6scopezone_common.h"*/
/*#include "mibgroup/ip-mib/data_access/ipv6scopezone_linux.h"*/
/*#include "mibgroup/ip-forward-mib/data_access/route_common.h"*/
/*#include "mibgroup/ip-forward-mib/data_access/route_linux.h"*/
/*#include "mibgroup/ip-forward-mib/data_access/route_ioctl.h"*/
/*#include "mibgroup/udp-mib/data_access/udp_endpoint_common.h"*/
/*#include "mibgroup/udp-mib/data_access/udp_endpoint_linux.h"*/
/*#include "mibgroup/ip-mib/data_access/ipaddress_ioctl.h"*/
