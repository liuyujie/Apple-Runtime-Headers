//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class _CLLocationSmootherProxy;

@interface CLLocationSmoother : NSObject
{
    _CLLocationSmootherProxy *_locationManagerSmootherProxy;
}

@property(nonatomic) id <CLLocationManagerDelegateInternal> delegate;
- (void)smoothLocations:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)smoothLocations:(id)arg1;
@property(readonly, retain, nonatomic) _CLLocationSmootherProxy *locationManagerSmootherProxy;
- (void)dealloc;

@end
