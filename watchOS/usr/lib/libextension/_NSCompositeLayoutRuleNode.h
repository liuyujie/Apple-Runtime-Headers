//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/_NSLayoutRuleNode.h>

#import "_NSLayoutRuleNodeParent.h"

@class NSArray, NSMutableArray, NSString;

@interface _NSCompositeLayoutRuleNode : _NSLayoutRuleNode <_NSLayoutRuleNodeParent>
{
    NSMutableArray *_childNodes;
}

- (void)_removeChildRuleNode:(id)arg1;
- (void)_addChildRuleNode:(id)arg1;
@property(readonly, copy) NSArray *_childRuleNodes;
@property(readonly, copy) NSString *debugDescription;
- (id)childNodesCreatingIfNecessary;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
