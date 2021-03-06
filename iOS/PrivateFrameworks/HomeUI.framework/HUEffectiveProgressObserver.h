//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HUEffectiveProgressObserver : NSObject
{
    CDUnknownBlockType _observerBlock;
    double _targetEffectiveProgress;
    id <NACancelable> _timerCancellationToken;
}

@property(retain, nonatomic) id <NACancelable> timerCancellationToken; // @synthesize timerCancellationToken=_timerCancellationToken;
@property(readonly, nonatomic) double targetEffectiveProgress; // @synthesize targetEffectiveProgress=_targetEffectiveProgress;
@property(readonly, copy, nonatomic) CDUnknownBlockType observerBlock; // @synthesize observerBlock=_observerBlock;
- (void).cxx_destruct;
- (id)initWithTargetEffectiveProgress:(double)arg1 observerBlock:(CDUnknownBlockType)arg2;

@end

