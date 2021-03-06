//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CoreTelephonyClientDataDelegate.h"
#import "CoreTelephonyClientRegistrationDelegate.h"

@class CTCarrier, CTServiceDescriptorContainer, CoreTelephonyClient, NSMutableDictionary, NSString;

@interface CTTelephonyNetworkInfo : NSObject <CoreTelephonyClientDataDelegate, CoreTelephonyClientRegistrationDelegate>
{
    struct queue _queue;
    CoreTelephonyClient *_client;
    CDUnknownBlockType _serviceSubscriberCellularProviderDidUpdateNotifier;
    CDUnknownBlockType _subscriberCellularProviderDidUpdateNotifier;
    CTServiceDescriptorContainer *_descriptors;
    CTCarrier *_subscriberCellularProvider;
    NSMutableDictionary *_serviceSubscriberCellularProvider;
    NSMutableDictionary *_cachedCurrentRadioAccessTechnology;
    NSMutableDictionary *_cachedSignalStrength;
    NSMutableDictionary *_cachedCellIds;
}

@property(retain) NSMutableDictionary *cachedCellIds; // @synthesize cachedCellIds=_cachedCellIds;
@property(retain) NSMutableDictionary *cachedSignalStrength; // @synthesize cachedSignalStrength=_cachedSignalStrength;
@property(retain) NSMutableDictionary *cachedCurrentRadioAccessTechnology; // @synthesize cachedCurrentRadioAccessTechnology=_cachedCurrentRadioAccessTechnology;
@property(retain) NSMutableDictionary *serviceSubscriberCellularProvider; // @synthesize serviceSubscriberCellularProvider=_serviceSubscriberCellularProvider;
@property(retain) CTCarrier *subscriberCellularProvider; // @synthesize subscriberCellularProvider=_subscriberCellularProvider;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)radioAccessTechnology;
- (id)getFirstCellId;
- (id)cellId;
- (id)serviceCellId;
- (id)signalStrength;
- (id)serviceSignalStrength;
@property(readonly, retain, nonatomic) NSString *currentRadioAccessTechnology;
- (id)currentServiceRadioAccessTechnology;
- (void)queryCellIds;
- (void)updateCellId:(id)arg1 forDescriptor:(id)arg2;
- (void)updateLegacyRat:(id)arg1;
- (void)updateRat:(id)arg1 descriptor:(id)arg2;
- (void)queryRatForDescriptor:(id)arg1;
- (void)queryRat;
- (void)querySignalStrengthForDescriptor:(id)arg1;
- (void)queryCTSignalStrength;
- (void)updateSignalStrength:(id)arg1 descriptor:(id)arg2;
- (void)signalStrengthChanged:(id)arg1 info:(id)arg2;
- (void)postCellularProviderUpdatesIfNecessary;
- (void)carrierBundleChange:(id)arg1;
- (void)cellChanged:(id)arg1 cell:(id)arg2;
- (void)connectionStateChanged:(id)arg1 connection:(int)arg2 dataConnectionStatusInfo:(id)arg3;
@property(readonly) CTServiceDescriptorContainer *descriptors; // @synthesize descriptors=_descriptors;
- (_Bool)updateNetworkInfoAndShouldNotifyClient:(_Bool *)arg1 forContext:(id)arg2;
- (_Bool)getAllowsVOIP:(_Bool *)arg1 forContext:(id)arg2 withError:(id *)arg3;
- (_Bool)getMobileNetworkCode:(id)arg1 forContext:(id)arg2 withError:(id *)arg3;
- (_Bool)getMobileCountryCode:(id)arg1 andIsoCountryCode:(id)arg2 forContext:(id)arg3 withError:(id *)arg4;
- (_Bool)getCarrierName:(id)arg1 forContext:(id)arg2 withError:(id *)arg3;
@property(copy, nonatomic) CDUnknownBlockType subscriberCellularProviderDidUpdateNotifier;
- (void)setServiceSubscriberCellularProviderDidUpdateNotifier:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)serviceSubscriberCellularProviderDidUpdateNotifier;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

