//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TURepeatingAction : NSObject
{
    CDUnknownBlockType _action;
    CDUnknownBlockType _completion;
    unsigned int _remainingIterations;
    double _pauseDuration;
}

@property(nonatomic) double pauseDuration; // @synthesize pauseDuration=_pauseDuration;
@property(nonatomic) unsigned int remainingIterations; // @synthesize remainingIterations=_remainingIterations;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
- (void).cxx_destruct;
- (id)initWithAction:(CDUnknownBlockType)arg1;

@end
