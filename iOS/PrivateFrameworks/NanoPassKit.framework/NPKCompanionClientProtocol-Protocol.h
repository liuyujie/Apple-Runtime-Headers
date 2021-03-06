//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, NSString, PKPaymentTransaction, PKTransitPassProperties;

@protocol NPKCompanionClientProtocol <NSObject>
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didUpdateWithBalances:(NSSet *)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didUpdateWithTransitPassProperties:(PKTransitPassProperties *)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didRemoveTransactionWithIdentifier:(NSString *)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didReceiveTransaction:(PKPaymentTransaction *)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didEnableTransactionService:(_Bool)arg2;
@end

