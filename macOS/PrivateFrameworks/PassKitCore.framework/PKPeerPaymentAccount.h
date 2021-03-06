//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSDate, NSDecimalNumber, NSDictionary, NSString, NSURL, PKCurrencyAmount;

@interface PKPeerPaymentAccount : NSObject <NSSecureCoding>
{
    BOOL _accountStateDirty;
    BOOL _identityVerificationRequired;
    BOOL _termsAcceptanceRequired;
    unsigned long long _state;
    unsigned long long _stage;
    NSString *_countryCode;
    PKCurrencyAmount *_currentBalance;
    NSDecimalNumber *_maximumBalance;
    NSDate *_lastUpdated;
    double _proactiveFetchPeriod;
    NSString *_termsIdentifier;
    NSURL *_termsURL;
    NSURL *_associatedPassURL;
    long long _pendingPaymentCount;
    NSArray *_supportedFeatureDescriptors;
    NSString *_associatedPassSerialNumber;
    NSString *_associatedPassTypeIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *associatedPassTypeIdentifier; // @synthesize associatedPassTypeIdentifier=_associatedPassTypeIdentifier;
@property(copy, nonatomic) NSString *associatedPassSerialNumber; // @synthesize associatedPassSerialNumber=_associatedPassSerialNumber;
@property(nonatomic) BOOL termsAcceptanceRequired; // @synthesize termsAcceptanceRequired=_termsAcceptanceRequired;
@property(nonatomic) BOOL identityVerificationRequired; // @synthesize identityVerificationRequired=_identityVerificationRequired;
@property(copy, nonatomic) NSArray *supportedFeatureDescriptors; // @synthesize supportedFeatureDescriptors=_supportedFeatureDescriptors;
@property(nonatomic) long long pendingPaymentCount; // @synthesize pendingPaymentCount=_pendingPaymentCount;
@property(copy, nonatomic) NSURL *associatedPassURL; // @synthesize associatedPassURL=_associatedPassURL;
@property(copy, nonatomic) NSURL *termsURL; // @synthesize termsURL=_termsURL;
@property(copy, nonatomic) NSString *termsIdentifier; // @synthesize termsIdentifier=_termsIdentifier;
@property(nonatomic) double proactiveFetchPeriod; // @synthesize proactiveFetchPeriod=_proactiveFetchPeriod;
@property(retain, nonatomic) NSDate *lastUpdated; // @synthesize lastUpdated=_lastUpdated;
@property(nonatomic, getter=isAccountStateDirty) BOOL accountStateDirty; // @synthesize accountStateDirty=_accountStateDirty;
@property(copy, nonatomic) NSDecimalNumber *maximumBalance; // @synthesize maximumBalance=_maximumBalance;
@property(copy, nonatomic) PKCurrencyAmount *currentBalance; // @synthesize currentBalance=_currentBalance;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(nonatomic) unsigned long long stage; // @synthesize stage=_stage;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isAccountOutOfDate;
- (id)associatedPassUniqueID;
@property(readonly, copy, nonatomic) NSArray *defaultSuggestions;
- (id)initWithDictionary:(id)arg1 lastUpdated:(id)arg2;
- (id)_featureWithIdentifier:(id)arg1;
- (id)cardBalancePromotionFeatureDescriptor;
- (BOOL)supportsCardBalancePromotion;
- (id)requestFromUserFeatureDescriptor;
- (BOOL)supportsRequestFromUser;
- (id)sendToUserFeatureDescriptor;
- (BOOL)supportsSendToUser;
- (id)transferToBankFeatureDescriptor;
- (BOOL)supportsTransferToBank;
- (id)loadFromCardFeatureDescriptor;
- (BOOL)supportsLoadFromCard;
@property(readonly, nonatomic) NSDictionary *maximumTransferAmounts;
@property(readonly, nonatomic) NSDictionary *minimumTransferAmounts;
- (id)initWithDictionary:(id)arg1;

@end

