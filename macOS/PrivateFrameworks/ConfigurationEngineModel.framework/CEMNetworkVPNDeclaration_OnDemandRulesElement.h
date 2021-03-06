//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray, NSString;

@interface CEMNetworkVPNDeclaration_OnDemandRulesElement : CEMPayloadBase
{
    NSArray *_payloadDNSDomainMatch;
    NSArray *_payloadDNSServerAddressMatch;
    NSString *_payloadURLStringProbe;
    NSString *_payloadAction;
}

+ (id)buildRequiredOnlyWithAction:(id)arg1;
+ (id)buildWithDNSDomainMatch:(id)arg1 withDNSServerAddressMatch:(id)arg2 withURLStringProbe:(id)arg3 withAction:(id)arg4;
+ (id)allowedPayloadKeys;
@property(copy, nonatomic) NSString *payloadAction; // @synthesize payloadAction=_payloadAction;
@property(copy, nonatomic) NSString *payloadURLStringProbe; // @synthesize payloadURLStringProbe=_payloadURLStringProbe;
@property(copy, nonatomic) NSArray *payloadDNSServerAddressMatch; // @synthesize payloadDNSServerAddressMatch=_payloadDNSServerAddressMatch;
@property(copy, nonatomic) NSArray *payloadDNSDomainMatch; // @synthesize payloadDNSDomainMatch=_payloadDNSDomainMatch;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;

@end

