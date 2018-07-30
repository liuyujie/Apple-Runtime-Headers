//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMDBackingStoreObjectProtocol.h"
#import "HMDBulletinIdentifiers.h"
#import "HMDHomeMessageReceiver.h"
#import "HMFDumpState.h"
#import "NSSecureCoding.h"

@class HMDApplicationData, HMDBulletinBoardNotification, HMDHAPAccessory, HMDHome, HMFMessageDispatcher, NSArray, NSMutableDictionary, NSNumber, NSObject<OS_dispatch_queue>, NSSet, NSString, NSUUID;

@interface HMDService : HMFObject <HMDBulletinIdentifiers, NSSecureCoding, HMFDumpState, HMDBackingStoreObjectProtocol, HMDHomeMessageReceiver>
{
    BOOL _hidden;
    BOOL _isEmptyConfiguredNameAllowed;
    BOOL _primary;
    HMDApplicationData *_appData;
    NSUUID *_uuid;
    NSNumber *_instanceID;
    NSNumber *_labelIndex;
    NSNumber *_labelNamespace;
    NSString *_serviceSubtype;
    NSNumber *_configurationState;
    HMDHAPAccessory *_accessory;
    NSString *_name;
    NSString *_associatedServiceType;
    NSArray *_linkedServices;
    NSArray *_characteristics;
    NSString *_serviceType;
    HMDBulletinBoardNotification *_bulletinBoardNotification;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMFMessageDispatcher *_messageDispatcher;
    NSUUID *_cachedAccessoryUUID;
    id <HMDServiceOwner> _owner;
    NSString *_expectedConfiguredName;
    NSString *_lastSeenConfiguredName;
    NSMutableDictionary *_deviceLastRequestPresenceDateMap;
    NSString *_providedName;
}

+ (BOOL)hasMessageReceiverChildren;
+ (BOOL)supportsSecureCoding;
+ (BOOL)validateProvidedName:(id)arg1;
+ (id)generateUUIDWithAccessoryUUID:(id)arg1 serviceID:(id)arg2;
@property(retain, nonatomic) NSString *providedName; // @synthesize providedName=_providedName;
@property(retain, nonatomic) NSMutableDictionary *deviceLastRequestPresenceDateMap; // @synthesize deviceLastRequestPresenceDateMap=_deviceLastRequestPresenceDateMap;
@property(copy, nonatomic) NSString *lastSeenConfiguredName; // @synthesize lastSeenConfiguredName=_lastSeenConfiguredName;
@property(copy, nonatomic) NSString *expectedConfiguredName; // @synthesize expectedConfiguredName=_expectedConfiguredName;
@property(nonatomic) __weak id <HMDServiceOwner> owner; // @synthesize owner=_owner;
@property(retain, nonatomic) NSUUID *cachedAccessoryUUID; // @synthesize cachedAccessoryUUID=_cachedAccessoryUUID;
@property(getter=isPrimary) BOOL primary; // @synthesize primary=_primary;
@property(readonly, nonatomic) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(nonatomic) BOOL isEmptyConfiguredNameAllowed; // @synthesize isEmptyConfiguredNameAllowed=_isEmptyConfiguredNameAllowed;
@property(retain, nonatomic) HMDBulletinBoardNotification *bulletinBoardNotification; // @synthesize bulletinBoardNotification=_bulletinBoardNotification;
@property(retain, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(copy, nonatomic) NSArray *characteristics; // @synthesize characteristics=_characteristics;
@property(copy, nonatomic) NSArray *linkedServices; // @synthesize linkedServices=_linkedServices;
@property(readonly, nonatomic) NSString *associatedServiceType; // @synthesize associatedServiceType=_associatedServiceType;
@property(nonatomic, getter=isHidden) BOOL hidden; // @synthesize hidden=_hidden;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) __weak HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
@property(retain, nonatomic) NSNumber *configurationState; // @synthesize configurationState=_configurationState;
@property(retain, nonatomic) NSString *serviceSubtype; // @synthesize serviceSubtype=_serviceSubtype;
@property(retain, nonatomic) NSNumber *labelNamespace; // @synthesize labelNamespace=_labelNamespace;
@property(retain, nonatomic) NSNumber *labelIndex; // @synthesize labelIndex=_labelIndex;
@property(copy, nonatomic) NSNumber *instanceID; // @synthesize instanceID=_instanceID;
- (void).cxx_destruct;
- (BOOL)shouldUpdateLastSeenConfiguredName:(id)arg1;
- (BOOL)_updateLastSeenConfiguredName:(id)arg1;
- (BOOL)_updateExpectedConfiguredName:(id)arg1;
- (void)_saveCurrentNameAsExpectedAndLastSeen:(id)arg1;
- (id)backingStoreObjects:(long long)arg1;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (void)_registerForMessages;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)_updateAllowsEmptyName;
- (BOOL)updateCharacteristics:(id)arg1;
- (void)appDataRemoved:(id)arg1 message:(id)arg2;
- (void)appDataUpdated:(id)arg1 message:(id)arg2;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)_transactionServiceUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (BOOL)listsEqual:(id)arg1 to:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updatePresenceRequestTimeForDeviceWithDestination:(id)arg1;
- (BOOL)shouldIncludePresenceForDeviceWithDestination:(id)arg1;
- (BOOL)shouldEnableDaemonRelaunch;
- (void)configureBulletinNotification:(CDUnknownBlockType)arg1;
- (void)configureMsgDispatcher:(id)arg1;
- (void)updateLastKnownValues;
- (id)getConfiguredName;
- (BOOL)updateAssociatedServiceType:(id)arg1 error:(id *)arg2;
@property(readonly, copy, nonatomic) NSString *defaultName;
- (id)findCharacteristicWithType:(id)arg1;
- (id)findCharacteristic:(id)arg1;
- (void)_readRequiredBTLECharacteristicValuesForceReadFWVersion:(BOOL)arg1;
- (id)gatherRequiredReadRequestsForceReadFWVersion:(BOOL)arg1;
- (BOOL)isReadingRequiredForBTLEServiceCharacteristic:(id)arg1;
- (id)_updateProvidedName:(id)arg1;
- (void)_setServiceProperties:(id)arg1;
- (void)_shouldServiceBeHidden;
- (BOOL)_supportsBulletinNotification;
- (void)_createNotification;
- (id)configureWithService:(id)arg1 accessory:(id)arg2 shouldRead:(BOOL)arg3;
- (id)configureWithService:(id)arg1 accessory:(id)arg2;
- (void)_handleSetAppData:(id)arg1;
@property(retain, nonatomic) HMDApplicationData *appData; // @synthesize appData=_appData;
@property(readonly, nonatomic) HMDHome *home;
@property(readonly, copy, nonatomic) NSString *serviceIdentifier;
@property(readonly, copy, nonatomic) NSString *type;
- (id)dumpState;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void)_recalculateUUID;
- (id)initWithAccessory:(id)arg1 owner:(id)arg2 instance:(id)arg3 uuid:(id)arg4;
- (id)initWithTransaction:(id)arg1 accessory:(id)arg2 owner:(id)arg3;
- (id)init;
@property(readonly, copy, nonatomic) NSUUID *contextSPIUniqueIdentifier;
@property(readonly, copy, nonatomic) NSString *contextID;
- (id)assistantObject;
- (id)url;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly) Class superclass;

@end
