//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSExtensionContext.h"

#import "GKExtensionHostProtocol.h"

@class GKGame, GKUIRemoteViewController, NSString;

@interface GKExtensionHostContext : NSExtensionContext <GKExtensionHostProtocol>
{
    GKGame *_game;
    GKUIRemoteViewController *_remoteViewControllerWeak;
}

@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
- (void)messageFromExtension:(id)arg1;
@property(nonatomic) GKUIRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewControllerWeak;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

