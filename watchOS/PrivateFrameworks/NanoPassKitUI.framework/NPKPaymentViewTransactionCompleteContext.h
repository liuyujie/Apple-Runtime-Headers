//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDecimalNumber, NSNumber, NSString, PKPass;

@interface NPKPaymentViewTransactionCompleteContext : NSObject
{
    _Bool _transactionComplete;
    _Bool _transactionFailed;
    _Bool _redeemedTicket;
    PKPass *_transactionPass;
    PKPass *_valueAddedServicePass;
    NSString *_paymentMethodDescription;
    unsigned int _transactionType;
    NSDecimalNumber *_transactionAmount;
    NSNumber *_balance;
    NSString *_transactionDescription;
    NSString *_currencyCode;
}

@property(retain, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(retain, nonatomic) NSString *transactionDescription; // @synthesize transactionDescription=_transactionDescription;
@property(retain, nonatomic) NSNumber *balance; // @synthesize balance=_balance;
@property(retain, nonatomic) NSDecimalNumber *transactionAmount; // @synthesize transactionAmount=_transactionAmount;
@property(nonatomic) _Bool redeemedTicket; // @synthesize redeemedTicket=_redeemedTicket;
@property(nonatomic) unsigned int transactionType; // @synthesize transactionType=_transactionType;
@property(nonatomic) _Bool transactionFailed; // @synthesize transactionFailed=_transactionFailed;
@property(nonatomic, getter=isTransactionComplete) _Bool transactionComplete; // @synthesize transactionComplete=_transactionComplete;
@property(retain, nonatomic) NSString *paymentMethodDescription; // @synthesize paymentMethodDescription=_paymentMethodDescription;
@property(retain, nonatomic) PKPass *valueAddedServicePass; // @synthesize valueAddedServicePass=_valueAddedServicePass;
@property(retain, nonatomic) PKPass *transactionPass; // @synthesize transactionPass=_transactionPass;
- (void).cxx_destruct;
- (id)_fareFreeTransactionDescriptionWithCredentialType:(int)arg1;
- (id)description;
- (void)forceToTransitTypeTransactionWithTransactionStatus:(unsigned int)arg1;
- (void)updateWithConcreteTransactions:(id)arg1 ephemeralTransaction:(id)arg2 appletState:(id)arg3 paymentApplication:(id)arg4;
- (id)init;

@end

