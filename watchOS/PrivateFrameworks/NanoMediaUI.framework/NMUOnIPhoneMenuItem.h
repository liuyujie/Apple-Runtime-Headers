//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoMediaUI/NMUMenuItem.h>

#import "NMCConnectivityObserver.h"

@interface NMUOnIPhoneMenuItem : NMUMenuItem <NMCConnectivityObserver>
{
}

- (void)_handleMediaRemoteOriginAvailableOriginsDidChangeNotification:(id)arg1;
- (void)manager:(id)arg1 connectivityDidChange:(_Bool)arg2;
- (CDUnknownBlockType)visibilityBlock;
- (void)dealloc;
- (id)init;

@end
