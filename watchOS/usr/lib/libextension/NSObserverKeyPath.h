//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSBoundKeyPath.h>

#import "NSObserver.h"
#import "NSOwningObserver.h"

@class NSString;

@interface NSObserverKeyPath : NSBoundKeyPath <NSOwningObserver, NSObserver>
{
}

@property(readonly, copy) NSString *description;
- (void)finishObserving;
- (void)setObservation:(id)arg1;
- (void)_receiveBox:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

