//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class _TimelineEntryNode;

@interface _TimelineNode : NSObject
{
    _TimelineNode *_rightNode;
    _TimelineNode *_leftNode;
}

@property(retain, nonatomic) _TimelineNode *leftNode; // @synthesize leftNode=_leftNode;
@property(retain, nonatomic) _TimelineNode *rightNode; // @synthesize rightNode=_rightNode;
- (void).cxx_destruct;
@property(readonly, nonatomic) _TimelineEntryNode *leftEntryNode;
@property(readonly, nonatomic) _TimelineEntryNode *rightEntryNode;

@end

