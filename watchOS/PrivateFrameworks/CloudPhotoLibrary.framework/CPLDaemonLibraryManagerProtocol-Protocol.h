//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPLDaemonLibraryManagerMinimalProtocol.h"

@class CPLChangeBatch, CPLChangeSessionContext, NSArray, NSString;

@protocol CPLDaemonLibraryManagerProtocol <CPLDaemonLibraryManagerMinimalProtocol>
- (void)acknowledgeChangedStatuses:(NSArray *)arg1;
- (void)deleteResources:(NSArray *)arg1 checkServerIfNecessary:(_Bool)arg2 completionHandler:(void (^)(NSArray *, NSDictionary *))arg3;
- (void)commitChangeBatch:(CPLChangeBatch *)arg1 withCompletionHandler:(void (^)(NSError *, unsigned int, CPLPushChangeTasks *, NSString *))arg2;
- (void)acknowledgeChangeBatch:(CPLChangeBatch *)arg1 withCompletionHandler:(void (^)(NSError *, NSString *))arg2;
- (void)getChangeBatchWithCompletionHandler:(void (^)(NSError *, CPLChangeBatch *))arg1;
- (void)finalizeSessionWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)beginPullSessionWithKnownLibraryVersion:(NSString *)arg1 context:(CPLChangeSessionContext *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)beginPushSessionWithKnownLibraryVersion:(NSString *)arg1 context:(CPLChangeSessionContext *)arg2 completionHandler:(void (^)(NSError *))arg3;
@end
