//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable, NSObject<OS_dispatch_queue>, PKFieldProperties;

@interface PKFieldDetector : NSObject
{
    struct os_unfair_lock_s _lock;
    NSHashTable *_observers;
    PKFieldProperties *_fieldProperties;
    NSObject<OS_dispatch_queue> *_fieldDetectorSerialQueue;
    NSObject<OS_dispatch_queue> *_replyQueue;
    id <PKFieldDetectorDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <PKFieldDetectorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak PKFieldProperties *fieldProperties;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (void)setPersistentFieldDetectionEnabled:(_Bool)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)init;

@end

