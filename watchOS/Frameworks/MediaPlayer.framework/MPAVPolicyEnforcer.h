//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPAVController;

@interface MPAVPolicyEnforcer : NSObject
{
    MPAVController *_controller;
}

@property(readonly, nonatomic) __weak MPAVController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)_isScreenRecordingDidChange:(_Bool)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)dealloc;
- (id)initWithAVController:(id)arg1;

@end

