//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKLabelCollectionNode.h>

@class NSArray;

@interface NTKHourLabelCollectionNode : NTKLabelCollectionNode
{
    NSArray *_valid;
}

@property(retain, nonatomic) NSArray *valid; // @synthesize valid=_valid;
- (void).cxx_destruct;
- (void)createSubNodes;
- (id)createParentNodesForHours:(id)arg1 withPositions:(struct CGPoint *)arg2 validHours:(id)arg3;

@end

