//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSObject<OS_dispatch_queue>, NSString, PLOperator;

@interface PLNSNotificationOperatorComposition : NSObject
{
    NSArray *_notificationNames;
    CDUnknownBlockType _operatorBlock;
    PLOperator *_operator;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_notificationObservers;
}

@property(retain) NSMutableArray *notificationObservers; // @synthesize notificationObservers=_notificationObservers;
@property(retain) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property __weak PLOperator *operator; // @synthesize operator=_operator;
@property(copy, nonatomic) CDUnknownBlockType operatorBlock; // @synthesize operatorBlock=_operatorBlock;
@property(retain) NSArray *notificationNames; // @synthesize notificationNames=_notificationNames;
- (void).cxx_destruct;
- (void)dealloc;
- (void)listenForNotifications:(BOOL)arg1;
@property(readonly) NSString *notificationName;
- (id)initWithWorkQueue:(id)arg1 forNotifications:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)initWithWorkQueue:(id)arg1 forNotification:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)initWithOperator:(id)arg1 forNotifications:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)initWithOperator:(id)arg1 forNotification:(id)arg2 withBlock:(CDUnknownBlockType)arg3;

@end
