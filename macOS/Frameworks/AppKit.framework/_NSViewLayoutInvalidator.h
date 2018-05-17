//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, NSView;

__attribute__((visibility("hidden")))
@interface _NSViewLayoutInvalidator : NSObject
{
    NSView *_observedView;
    NSSet *_observedKeyPaths;
    BOOL _handleAlignmentRectInsets;
}

+ (id)newInvalidatorForView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property NSView *observedView;
- (id)keyPathsForPropertiesObservedDirectly;
- (id)autorelease;
- (void)dealloc;

@end
