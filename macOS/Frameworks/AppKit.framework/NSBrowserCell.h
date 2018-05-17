//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSCell.h>

@class NSImage;

@interface NSBrowserCell : NSCell
{
}

+ (id)highlightedBranchImage;
+ (id)branchImage;
+ (void)initialize;
- (void)dealloc;
- (void)drawWithExpansionFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)expansionFrameWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)highlight:(BOOL)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (long long)interiorBackgroundStyle;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_drawFillWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_drawHighlightWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_drawLiveResizeHighlightWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)highlightColorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)highlightColorInView:(id)arg1;
- (BOOL)_checkLoaded:(id)arg1 rect:(const struct CGRect *)arg2 highlight:(long long)arg3;
- (void)set;
- (void)reset;
@property(getter=isLoaded) BOOL loaded;
- (BOOL)_isLoaded;
@property(getter=isLeaf) BOOL leaf;
@property(retain) NSImage *alternateImage;
@property(retain) NSImage *image;
- (id)initWithCoder:(id)arg1;
- (id)initImageCell:(id)arg1;
- (id)init;
- (id)initTextCell:(id)arg1;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (struct CGRect)_titleReservedRectForBounds:(struct CGRect)arg1;
- (struct CGRect)imageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)_browserCell_imageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)_imageReservedRectForBounds:(struct CGRect)arg1;
- (struct CGRect)_branchImageRectForBounds:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)_branchImageReservedRectForBounds:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGSize)_branchImageReservedSize;
- (struct CGSize)_imageReservedSize;
- (id)_currentImage;
- (id)_currentImageWithView:(id)arg1;
- (id)_currentBranchImageWithView:(id)arg1;
- (long long)_fillSurfaceBackgroundStyleWithView:(id)arg1;
- (int)_browserFillStyle;
- (id)_browserBackgroundColorWithView:(id)arg1;
- (id)_enclosingBrowserForControlView:(id)arg1;
- (BOOL)_branchImageEnabled;
- (void)_setBranchImageEnabled:(BOOL)arg1;
- (struct CGSize)labelSizeForBounds:(struct CGRect)arg1;

@end
