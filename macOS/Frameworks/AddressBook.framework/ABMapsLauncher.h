//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABMapsLaunchRequest;

__attribute__((visibility("hidden")))
@interface ABMapsLauncher : NSObject
{
    ABMapsLaunchRequest *_launchRequest;
    ABMapsLauncher *_nextLauncher;
}

+ (id)mapsLauncherWithRequest:(id)arg1;
@property(readonly, nonatomic) ABMapsLauncher *nextLauncher; // @synthesize nextLauncher=_nextLauncher;
@property(readonly, nonatomic) ABMapsLaunchRequest *launchRequest; // @synthesize launchRequest=_launchRequest;
- (void).cxx_destruct;
- (void)launchMaps;
- (id)initWithLaunchRequest:(id)arg1 nextLauncher:(id)arg2;
- (id)initWithLaunchRequest:(id)arg1;
- (id)init;

@end
