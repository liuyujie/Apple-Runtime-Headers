//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSPContainerEdit.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _MSPContainerEdit : NSObject <MSPContainerEdit>
{
}

- (void)useImmutableObjectsFromMap:(id)arg1 intermediateMutableObjectTransferBlock:(CDUnknownBlockType)arg2;
- (void)ifAddition:(CDUnknownBlockType)arg1 ifRemoval:(CDUnknownBlockType)arg2 ifReplacement:(CDUnknownBlockType)arg3 ifContentUpdate:(CDUnknownBlockType)arg4 ifReplacedEntirely:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

