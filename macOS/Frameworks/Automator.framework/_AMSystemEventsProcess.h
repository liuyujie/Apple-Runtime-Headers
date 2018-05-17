//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Automator/_AMSystemEventsUIElement.h>

@class NSString, _AMSystemEventsAlias;

@interface _AMSystemEventsProcess : _AMSystemEventsUIElement
{
}

@property BOOL visible;
@property(readonly) long long unixId;
@property(readonly) long long totalPartitionSize;
@property(readonly, copy) NSString *shortName;
@property(readonly) long long partitionSpaceUsed;
@property(readonly, copy) NSString *name;
- (long long)id;
@property(readonly) BOOL hasScriptingTerminology;
@property BOOL frontmost;
@property(readonly, copy) NSString *fileType;
@property(readonly, copy) _AMSystemEventsAlias *file;
@property(readonly, copy) NSString *displayedName;
@property(readonly, copy) NSString *creatorType;
@property(readonly) BOOL Classic;
@property(readonly, copy) NSString *bundleIdentifier;
@property(readonly) BOOL backgroundOnly;
@property(readonly, copy) NSString *architecture;
@property(readonly) BOOL acceptsRemoteEvents;
@property(readonly) BOOL acceptsHighLevelEvents;
- (id)windows;
- (id)menuBars;

@end
