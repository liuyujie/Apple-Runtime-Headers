//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import "CEMRegisteredTypeProtocol.h"

@class NSNumber, NSString;

@interface CEMNetworkCellularSettingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSNumber *_payloadAllowDataRoaming;
    NSNumber *_payloadAllowVoiceRoaming;
    NSNumber *_payloadAllowPersonalHotspot;
    NSNumber *_payloadAllowGlobalBackgroundFetchWhenRoaming;
    NSNumber *_payloadAllowCellularPlanModification;
    NSNumber *_payloadAllowAppCellularDataModification;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withAllowDataRoaming:(id)arg2 withAllowVoiceRoaming:(id)arg3 withAllowPersonalHotspot:(id)arg4 withAllowGlobalBackgroundFetchWhenRoaming:(id)arg5 withAllowCellularPlanModification:(id)arg6 withAllowAppCellularDataModification:(id)arg7;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSNumber *payloadAllowAppCellularDataModification; // @synthesize payloadAllowAppCellularDataModification=_payloadAllowAppCellularDataModification;
@property(copy, nonatomic) NSNumber *payloadAllowCellularPlanModification; // @synthesize payloadAllowCellularPlanModification=_payloadAllowCellularPlanModification;
@property(copy, nonatomic) NSNumber *payloadAllowGlobalBackgroundFetchWhenRoaming; // @synthesize payloadAllowGlobalBackgroundFetchWhenRoaming=_payloadAllowGlobalBackgroundFetchWhenRoaming;
@property(copy, nonatomic) NSNumber *payloadAllowPersonalHotspot; // @synthesize payloadAllowPersonalHotspot=_payloadAllowPersonalHotspot;
@property(copy, nonatomic) NSNumber *payloadAllowVoiceRoaming; // @synthesize payloadAllowVoiceRoaming=_payloadAllowVoiceRoaming;
@property(copy, nonatomic) NSNumber *payloadAllowDataRoaming; // @synthesize payloadAllowDataRoaming=_payloadAllowDataRoaming;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)assetReferences;
- (int)activationLevel;
- (_Bool)mustBeSupervised;
- (_Bool)multipleAllowed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

