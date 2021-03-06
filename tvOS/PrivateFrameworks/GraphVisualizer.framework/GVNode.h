//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableOrderedSet;

@interface GVNode : NSObject
{
    double x;
    double y;
    double w;
    double h;
    NSMutableOrderedSet *inNodes;
    NSMutableOrderedSet *outNodes;
    long long rank;
    long long index;
    GVNode *prev;
    GVNode *next;
    unsigned long long inPriority;
    unsigned long long outPriority;
}

@property(nonatomic) unsigned long long outPriority; // @synthesize outPriority;
@property(nonatomic) unsigned long long inPriority; // @synthesize inPriority;
@property(nonatomic) GVNode *next; // @synthesize next;
@property(nonatomic) GVNode *prev; // @synthesize prev;
@property(nonatomic) long long index; // @synthesize index;
@property(nonatomic) long long rank; // @synthesize rank;
@property(retain, nonatomic) NSMutableOrderedSet *outNodes; // @synthesize outNodes;
@property(retain, nonatomic) NSMutableOrderedSet *inNodes; // @synthesize inNodes;
@property(nonatomic) double h; // @synthesize h;
@property(nonatomic) double w; // @synthesize w;
@property(nonatomic) double y; // @synthesize y;
@property(nonatomic) double x; // @synthesize x;
- (void)traversePreorder:(int)arg1 withCallback:(CDUnknownBlockType)arg2 randomize:(_Bool)arg3;
- (void)traversePostorder:(int)arg1 withCallback:(CDUnknownBlockType)arg2 stopper:(CDUnknownBlockType)arg3 randomize:(_Bool)arg4;
- (id)description;
- (void)computePriority;
- (void)removeEdgeTo:(id)arg1;
- (void)removeEdgeFrom:(id)arg1;
- (void)addEdgeTo:(id)arg1;
- (void)addEdgeFrom:(id)arg1;
- (_Bool)hasEdgeTo:(id)arg1;
- (_Bool)hasEdgeFrom:(id)arg1;
@property(readonly) unsigned long long outDegree;
@property(readonly) unsigned long long inDegree;
@property(nonatomic) struct CGSize size;
@property(nonatomic) struct CGPoint center;
@property(nonatomic) struct CGPoint origin;
@property(nonatomic) struct CGRect frame;
@property(nonatomic) double cy;
@property(nonatomic) double cx;
- (void)dealloc;
- (id)init;

@end

