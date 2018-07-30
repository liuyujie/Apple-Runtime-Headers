//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSObservation.h>

@class NSObject<NSObservable>;

__attribute__((visibility("hidden")))
@interface _NSConcreteBlockSinkObservation : NSObservation
{
    NSObject<NSObservable> *_LHSobservable;
    CDUnknownBlockType _block;
    int _tag;
}

- (void)dealloc;
- (void)_receiveBox:(id)arg1;
- (void)finishObserving;
- (void)remove;
- (id)initWithObservable:(id)arg1 blockSink:(CDUnknownBlockType)arg2 tag:(int)arg3;
- (id)debugDescription;
- (id *)_observerStorage;
- (void *)_observerStorageOfSize:(unsigned long long)arg1;
- (BOOL)isEqual:(id)arg1;

@end
