//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable;

@interface NSTouchBarFinder : NSObject
{
    id <NSTouchBarProviderContainer> _rootProviderContainer;
    id <NSTouchBarFinderObserver> _observer;
    NSMapTable *_observationsByProvider;
    BOOL _needsUpdate;
}

- (void)_userDefinedTouchBarDidReset:(id)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithRootProviderContainer:(id)arg1 observer:(id)arg2;

@end
