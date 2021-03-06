// ***** Generated by Codegen *****
// Copyright (C) 2008-2009 Citrix Systems Inc
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

#ifndef __XEN_VIRTUALSYSTEMMIGRATIONSERVICE_H__
#define __XEN_VIRTUALSYSTEMMIGRATIONSERVICE_H__

/* Values for the various properties of the class's methods */
typedef enum _Xen_VirtualSystemMigrationService_MigrateVirtualSystemToHost{
    Xen_VirtualSystemMigrationService_MigrateVirtualSystemToHost_Completed_with_No_Error=0,
    Xen_VirtualSystemMigrationService_MigrateVirtualSystemToHost_Not_Supported=1,
    Xen_VirtualSystemMigrationService_MigrateVirtualSystemToHost_Failed=2,
    Xen_VirtualSystemMigrationService_MigrateVirtualSystemToHost_Timeout=3,
    Xen_VirtualSystemMigrationService_MigrateVirtualSystemToHost_Invalid_Parameter=4,
    Xen_VirtualSystemMigrationService_MigrateVirtualSystemToHost_Invalid_State=5,
    Xen_VirtualSystemMigrationService_MigrateVirtualSystemToHost_Incompatible_Parameters=6,
    /*Xen_VirtualSystemMigrationService_MigrateVirtualSystemToHost_DMTF_Reserved=..,*/
    Xen_VirtualSystemMigrationService_MigrateVirtualSystemToHost_Method_Parameters_Checked___Job_Started=4096,
    /*Xen_VirtualSystemMigrationService_MigrateVirtualSystemToHost_Method_Reserved=4097..32767,*/
    /*Xen_VirtualSystemMigrationService_MigrateVirtualSystemToHost_Vendor_Specific=32768..65535,*/
}Xen_VirtualSystemMigrationService_MigrateVirtualSystemToHost;

typedef enum _Xen_VirtualSystemMigrationService_RequestStateChange{
    Xen_VirtualSystemMigrationService_RequestStateChange_Completed_with_No_Error=0,
    Xen_VirtualSystemMigrationService_RequestStateChange_Not_Supported=1,
    Xen_VirtualSystemMigrationService_RequestStateChange_Unknown_or_Unspecified_Error=2,
    Xen_VirtualSystemMigrationService_RequestStateChange_Cannot_complete_within_Timeout_Period=3,
    Xen_VirtualSystemMigrationService_RequestStateChange_Failed=4,
    Xen_VirtualSystemMigrationService_RequestStateChange_Invalid_Parameter=5,
    Xen_VirtualSystemMigrationService_RequestStateChange_In_Use=6,
    /*Xen_VirtualSystemMigrationService_RequestStateChange_DMTF_Reserved=..,*/
    Xen_VirtualSystemMigrationService_RequestStateChange_Method_Parameters_Checked___Job_Started=4096,
    Xen_VirtualSystemMigrationService_RequestStateChange_Invalid_State_Transition=4097,
    Xen_VirtualSystemMigrationService_RequestStateChange_Use_of_Timeout_Parameter_Not_Supported=4098,
    Xen_VirtualSystemMigrationService_RequestStateChange_Busy=4099,
    /*Xen_VirtualSystemMigrationService_RequestStateChange_Method_Reserved=4100..32767,*/
    /*Xen_VirtualSystemMigrationService_RequestStateChange_Vendor_Specific=32768..65535,*/
}Xen_VirtualSystemMigrationService_RequestStateChange;

typedef enum _Xen_VirtualSystemMigrationService_ChangeAffectedElementsAssignedSequence{
    Xen_VirtualSystemMigrationService_ChangeAffectedElementsAssignedSequence_Completed_with_No_Error=0,
    Xen_VirtualSystemMigrationService_ChangeAffectedElementsAssignedSequence_Not_Supported=1,
    Xen_VirtualSystemMigrationService_ChangeAffectedElementsAssignedSequence_Error_Occured=2,
    Xen_VirtualSystemMigrationService_ChangeAffectedElementsAssignedSequence_Busy=3,
    Xen_VirtualSystemMigrationService_ChangeAffectedElementsAssignedSequence_Invalid_Reference=4,
    Xen_VirtualSystemMigrationService_ChangeAffectedElementsAssignedSequence_Invalid_Parameter=5,
    Xen_VirtualSystemMigrationService_ChangeAffectedElementsAssignedSequence_Access_Denied=6,
    /*Xen_VirtualSystemMigrationService_ChangeAffectedElementsAssignedSequence_DMTF_Reserved=7..32767,*/
    /*Xen_VirtualSystemMigrationService_ChangeAffectedElementsAssignedSequence_Vendor_Specified=32768..65535,*/
}Xen_VirtualSystemMigrationService_ChangeAffectedElementsAssignedSequence;

typedef enum _Xen_VirtualSystemMigrationService_MigrateVirtualSystemToSystem{
    Xen_VirtualSystemMigrationService_MigrateVirtualSystemToSystem_Completed_with_No_Error=0,
    Xen_VirtualSystemMigrationService_MigrateVirtualSystemToSystem_Not_Supported=1,
    Xen_VirtualSystemMigrationService_MigrateVirtualSystemToSystem_Failed=2,
    Xen_VirtualSystemMigrationService_MigrateVirtualSystemToSystem_Timeout=3,
    Xen_VirtualSystemMigrationService_MigrateVirtualSystemToSystem_Invalid_Parameter=4,
    Xen_VirtualSystemMigrationService_MigrateVirtualSystemToSystem_Invalid_State=5,
    Xen_VirtualSystemMigrationService_MigrateVirtualSystemToSystem_Incompatible_Parameters=6,
    /*Xen_VirtualSystemMigrationService_MigrateVirtualSystemToSystem_DMTF_Reserved=..,*/
    Xen_VirtualSystemMigrationService_MigrateVirtualSystemToSystem_Method_Parameters_Checked___Job_Started=4096,
    /*Xen_VirtualSystemMigrationService_MigrateVirtualSystemToSystem_Method_Reserved=4097..32767,*/
    /*Xen_VirtualSystemMigrationService_MigrateVirtualSystemToSystem_Vendor_Specific=32768..65535,*/
}Xen_VirtualSystemMigrationService_MigrateVirtualSystemToSystem;

typedef enum _Xen_VirtualSystemMigrationService_CheckVirtualSystemIsMigratableToHost{
    Xen_VirtualSystemMigrationService_CheckVirtualSystemIsMigratableToHost_Completed_with_No_Error=0,
    Xen_VirtualSystemMigrationService_CheckVirtualSystemIsMigratableToHost_Not_Supported=1,
    Xen_VirtualSystemMigrationService_CheckVirtualSystemIsMigratableToHost_Failed=2,
    Xen_VirtualSystemMigrationService_CheckVirtualSystemIsMigratableToHost_Timeout=3,
    Xen_VirtualSystemMigrationService_CheckVirtualSystemIsMigratableToHost_Invalid_Parameter=4,
    Xen_VirtualSystemMigrationService_CheckVirtualSystemIsMigratableToHost_Invalid_State=5,
    Xen_VirtualSystemMigrationService_CheckVirtualSystemIsMigratableToHost_Incompatible_Parameters=6,
    /*Xen_VirtualSystemMigrationService_CheckVirtualSystemIsMigratableToHost_DMTF_Reserved=..,*/
    /*Xen_VirtualSystemMigrationService_CheckVirtualSystemIsMigratableToHost_Method_Reserved=4097..32767,*/
    /*Xen_VirtualSystemMigrationService_CheckVirtualSystemIsMigratableToHost_Vendor_Specific=32768..65535,*/
}Xen_VirtualSystemMigrationService_CheckVirtualSystemIsMigratableToHost;

typedef enum _Xen_VirtualSystemMigrationService_CheckVirtualSystemIsMigratableToSystem{
    Xen_VirtualSystemMigrationService_CheckVirtualSystemIsMigratableToSystem_Completed_with_No_Error=0,
    Xen_VirtualSystemMigrationService_CheckVirtualSystemIsMigratableToSystem_Not_Supported=1,
    Xen_VirtualSystemMigrationService_CheckVirtualSystemIsMigratableToSystem_Failed=2,
    Xen_VirtualSystemMigrationService_CheckVirtualSystemIsMigratableToSystem_Timeout=3,
    Xen_VirtualSystemMigrationService_CheckVirtualSystemIsMigratableToSystem_Invalid_Parameter=4,
    Xen_VirtualSystemMigrationService_CheckVirtualSystemIsMigratableToSystem_Invalid_State=5,
    Xen_VirtualSystemMigrationService_CheckVirtualSystemIsMigratableToSystem_Incompatible_Parameters=6,
    /*Xen_VirtualSystemMigrationService_CheckVirtualSystemIsMigratableToSystem_DMTF_Reserved=..,*/
    /*Xen_VirtualSystemMigrationService_CheckVirtualSystemIsMigratableToSystem_Method_Reserved=4097..32767,*/
    /*Xen_VirtualSystemMigrationService_CheckVirtualSystemIsMigratableToSystem_Vendor_Specific=32768..65535,*/
}Xen_VirtualSystemMigrationService_CheckVirtualSystemIsMigratableToSystem;

typedef enum _Xen_VirtualSystemMigrationSettingData_MigrationType{
    Xen_VirtualSystemMigrationSettingData_MigrationType_Unknown=0,
    Xen_VirtualSystemMigrationSettingData_MigrationType_Other=1,
    Xen_VirtualSystemMigrationSettingData_MigrationType_Live=2,
    Xen_VirtualSystemMigrationSettingData_MigrationType_Resume=3,
    Xen_VirtualSystemMigrationSettingData_MigrationType_Restart=4,
}Xen_VirtualSystemMigrationSettingData_MigrationType;

typedef enum _Xen_VirtualSystemMigrationSettingData_TransportType{
    Xen_VirtualSystemMigrationSettingData_TransportType_Unknown=0,
    Xen_VirtualSystemMigrationSettingData_TransportType_Other=1,
    Xen_VirtualSystemMigrationSettingData_TransportType_SSH=2,
    Xen_VirtualSystemMigrationSettingData_TransportType_TLS=3,
    Xen_VirtualSystemMigrationSettingData_TransportType_TLS_Strict=4,
    Xen_VirtualSystemMigrationSettingData_TransportType_TCP=5,
    Xen_VirtualSystemMigrationSettingData_TransportType_IPC=6,
    /*Xen_VirtualSystemMigrationSettingData_TransportType_DMTF_Reserved=..,*/
    /*Xen_VirtualSystemMigrationSettingData_TransportType_Vendor_Reserved=32768..,*/
}Xen_VirtualSystemMigrationSettingData_TransportType;

#endif /*__XEN_VIRTUALSYSTEMMIGRATIONSERVICE_H__*/
