//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HDSyncSession, NSArray, NSError;

@protocol HDSyncSessionDelegate <NSObject>
- (void)syncSession:(HDSyncSession *)arg1 didFinishSuccessfully:(_Bool)arg2 error:(NSError *)arg3;
- (void)syncSession:(HDSyncSession *)arg1 sendChanges:(NSArray *)arg2 completion:(void (^)(int, NSError *))arg3;
- (void)syncSessionWillBegin:(HDSyncSession *)arg1;

@optional
- (_Bool)syncSession:(HDSyncSession *)arg1 didEndTransactionWithError:(id *)arg2;
@end

