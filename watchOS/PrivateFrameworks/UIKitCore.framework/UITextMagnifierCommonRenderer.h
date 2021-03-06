//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class CALayer, NSDictionary;

__attribute__((visibility("hidden")))
@interface UITextMagnifierCommonRenderer : UIView
{
    _Bool m_loaded;
    NSDictionary *m_images;
    NSDictionary *m_offsets;
    CALayer *m_back;
    CALayer *m_mask;
    CALayer *m_content;
    CALayer *m_front;
    _Bool _isRegisteredForGeometryChanges;
}

- (void).cxx_destruct;
- (id)visualsForMagnifier;
- (void)_geometryChanges:(id)arg1 forAncestor:(id)arg2;
- (void)update;
- (id)backgroundColourIfNecessary;
- (id)magnifier;
- (void)didMoveToSuperview;
- (void)performOperations:(CDUnknownBlockType)arg1;
- (void)loadImages;

@end

