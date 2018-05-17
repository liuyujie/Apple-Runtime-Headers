//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@protocol SKInAppService <NSObject>
- (void)requestVPPReceiptRenewalWithSandboxOptions:(NSDictionary *)arg1 replyBlock:(void (^)(BOOL, NSError *))arg2;
- (void)deleteSharedIAPContentForGroupID:(NSString *)arg1 productID:(NSString *)arg2;
- (void)deleteContentForProductID:(NSString *)arg1;
- (void)resumeDownloadWithID:(NSString *)arg1;
- (void)pauseDownloadWithID:(NSString *)arg1;
- (void)cancelDownloadWithID:(NSString *)arg1;
- (void)addDownloadWithID:(NSString *)arg1;
- (void)restoreCompletedTransactionsForUsername:(NSString *)arg1;
- (void)finishPaymentWithIdentifier:(NSString *)arg1;
- (void)addPaymentWithInfo:(NSDictionary *)arg1;
- (void)requestProductsWithIdentifiers:(NSArray *)arg1 replyBlock:(void (^)(NSArray *, NSArray *, NSError *))arg2;
- (void)checkIn;
@end
