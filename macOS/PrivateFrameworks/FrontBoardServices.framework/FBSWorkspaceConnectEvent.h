//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FrontBoardServices/FBSWorkspaceEvent.h>

@class FBSProcessHandle;

@interface FBSWorkspaceConnectEvent : FBSWorkspaceEvent
{
    FBSProcessHandle *_processHandle;
}

@property(readonly, nonatomic) FBSProcessHandle *processHandle; // @synthesize processHandle=_processHandle;
- (void).cxx_destruct;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)init;

@end
