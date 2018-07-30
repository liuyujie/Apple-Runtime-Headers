//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NAFuture, NSMutableSet;

@interface HFHomeAppInstallController : NSObject
{
    NAFuture *_activeHomeAppDownloadFuture;
    long long _lastReportedStatus;
    NSMutableSet *_statusUpdaters;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSMutableSet *statusUpdaters; // @synthesize statusUpdaters=_statusUpdaters;
@property(nonatomic) long long lastReportedStatus; // @synthesize lastReportedStatus=_lastReportedStatus;
@property(retain, nonatomic) NAFuture *activeHomeAppDownloadFuture; // @synthesize activeHomeAppDownloadFuture=_activeHomeAppDownloadFuture;
- (void).cxx_destruct;
- (id)downloadHomeAppWithUpdateBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) long long status; // @dynamic status;
- (_Bool)_isHomeAppInstalled;
- (id)init;

@end
