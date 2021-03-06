//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TVCSRemoteInputLimiting.h"

@class NSString, NSXPCConnection;

@interface TVCSRemoteInputLimitingCenter : NSObject <TVCSRemoteInputLimiting>
{
    _Bool _applicationActive;
    _Bool _viewServiceActive;
    NSXPCConnection *_connection;
    long long _limitCount;
}

+ (id)sharedInstance;
@property(nonatomic, getter=isViewServiceActive) _Bool viewServiceActive; // @synthesize viewServiceActive=_viewServiceActive;
@property(nonatomic, getter=isApplicationActive) _Bool applicationActive; // @synthesize applicationActive=_applicationActive;
@property(nonatomic) long long limitCount; // @synthesize limitCount=_limitCount;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)endLimitingRemoteInput;
- (void)beginLimitingRemoteInput;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_didBecomeActive;
- (void)_willResignActive;
- (id)_server;
- (_Bool)_isActive;
- (_Bool)_isActiveWithApplicationActivity:(_Bool)arg1 viewServiceActivity:(_Bool)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

