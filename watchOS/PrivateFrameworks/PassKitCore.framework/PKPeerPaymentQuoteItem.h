//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSData, NSDecimalNumber, NSString;

@interface PKPeerPaymentQuoteItem : NSObject <NSSecureCoding>
{
    unsigned int _type;
    NSDecimalNumber *_exchangeRate;
    NSDecimalNumber *_sendAmount;
    NSString *_sendAmountCurrency;
    NSDecimalNumber *_receiveAmount;
    NSString *_receiveAmountCurrency;
    NSDecimalNumber *_totalAmount;
    NSString *_totalAmountCurrency;
    NSDecimalNumber *_fees;
    NSString *_feesCurrency;
    NSString *_dpanIdentifier;
    NSString *_countryCode;
    NSArray *_supportedNetworks;
    NSString *_merchantIdentifier;
    unsigned int _merchantCapabilities;
    NSData *_nonce;
}

+ (_Bool)supportsSecureCoding;
+ (id)quoteItemWithDictionary:(id)arg1;
@property(readonly, copy, nonatomic) NSData *nonce; // @synthesize nonce=_nonce;
@property(readonly, nonatomic) unsigned int merchantCapabilities; // @synthesize merchantCapabilities=_merchantCapabilities;
@property(readonly, copy, nonatomic) NSString *merchantIdentifier; // @synthesize merchantIdentifier=_merchantIdentifier;
@property(readonly, copy, nonatomic) NSArray *supportedNetworks; // @synthesize supportedNetworks=_supportedNetworks;
@property(readonly, copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(readonly, copy, nonatomic) NSString *dpanIdentifier; // @synthesize dpanIdentifier=_dpanIdentifier;
@property(readonly, copy, nonatomic) NSString *feesCurrency; // @synthesize feesCurrency=_feesCurrency;
@property(readonly, copy, nonatomic) NSDecimalNumber *fees; // @synthesize fees=_fees;
@property(readonly, copy, nonatomic) NSString *totalAmountCurrency; // @synthesize totalAmountCurrency=_totalAmountCurrency;
@property(readonly, copy, nonatomic) NSDecimalNumber *totalAmount; // @synthesize totalAmount=_totalAmount;
@property(readonly, copy, nonatomic) NSString *receiveAmountCurrency; // @synthesize receiveAmountCurrency=_receiveAmountCurrency;
@property(readonly, copy, nonatomic) NSDecimalNumber *receiveAmount; // @synthesize receiveAmount=_receiveAmount;
@property(readonly, copy, nonatomic) NSString *sendAmountCurrency; // @synthesize sendAmountCurrency=_sendAmountCurrency;
@property(readonly, copy, nonatomic) NSDecimalNumber *sendAmount; // @synthesize sendAmount=_sendAmount;
@property(readonly, copy, nonatomic) NSDecimalNumber *exchangeRate; // @synthesize exchangeRate=_exchangeRate;
@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

