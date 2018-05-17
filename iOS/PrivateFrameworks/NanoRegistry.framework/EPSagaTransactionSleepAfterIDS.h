//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EPTransaction.h"

@class NSString;

@interface EPSagaTransactionSleepAfterIDS : NSObject <EPTransaction>
{
    id <EPTransactionDelegate> _delegate;
}

+ (_Bool)canRollback;
@property(nonatomic) __weak id <EPTransactionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)beginRollbackWithRoutingSlipEntry:(id)arg1 serviceRegistry:(id)arg2;
- (void)beginTransactionWithRoutingSlipEntry:(id)arg1 serviceRegistry:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
