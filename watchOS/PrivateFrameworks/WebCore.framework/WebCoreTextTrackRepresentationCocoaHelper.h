//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CALayerDelegate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface WebCoreTextTrackRepresentationCocoaHelper : NSObject <CALayerDelegate>
{
    struct TextTrackRepresentationCocoa *_parent;
}

- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property struct TextTrackRepresentationCocoa *parent;
- (void)dealloc;
- (id)initWithParent:(struct TextTrackRepresentationCocoa *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

