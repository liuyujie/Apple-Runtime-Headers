//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, UISDisplayContext;

__attribute__((visibility("hidden")))
@interface _UIScreenInitialDisplayConfigurationLoader : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    UISDisplayContext *_context;
    _Bool _hasRequestedPreload;
}

+ (id)sharedLoader;
- (void).cxx_destruct;
@property(readonly, nonatomic) UISDisplayContext *initialDisplayContext;
- (id)initialDisplayConfiguration;
- (void)_startPreloadInitialDisplayContext;

@end

