//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface _TVViewFactory : NSObject
{
}

+ (id)playlistImgWithElement:(id)arg1 existingView:(id)arg2;
+ (id)imageViewWithElement:(id)arg1 existingView:(id)arg2 size:(struct CGSize)arg3 scaleMode:(long long)arg4;
+ (id)imageStackViewWithElement:(id)arg1 existingView:(id)arg2;
+ (id)_organizerViewWithElement:(id)arg1 elements:(id)arg2 existingView:(id)arg3;
+ (id)organizerViewWithElements:(id)arg1 existingView:(id)arg2;
- (id)_separatorViewForElement:(id)arg1 existingView:(id)arg2;
- (id)_seasonsBadgeWithElement:(id)arg1 existingView:(id)arg2;
- (id)_progressBarFromElement:(id)arg1 existingView:(id)arg2;
- (id)_ratingBadgeFromElement:(id)arg1 existingView:(id)arg2;
- (id)_segmentedControlForElement:(id)arg1 existingView:(id)arg2;
- (id)_buttonLockupForElement:(id)arg1 existingView:(id)arg2;
- (id)_buttonForElement:(id)arg1 existingView:(id)arg2;
- (id)_rowViewForElement:(id)arg1 existingView:(id)arg2;
- (id)_monogramViewForElement:(id)arg1 existingView:(id)arg2;
- (id)_loadingImageViewForElement:(id)arg1 existingView:(id)arg2;
- (id)_imageViewForElement:(id)arg1 existingView:(id)arg2;
- (id)_mediaContentViewForElement:(id)arg1 existingView:(id)arg2;
- (id)_imageViewForBadgeElement:(id)arg1 existingView:(id)arg2;
- (id)_activityIndicatorViewForElement:(id)arg1 existingView:(id)arg2;
- (id)_organizerViewForElement:(id)arg1 existingView:(id)arg2;
- (id)_zoomableTextViewFromElement:(id)arg1 alwaysFocusable:(_Bool)arg2 existingView:(id)arg3;
- (id)_headerColumnViewForElement:(id)arg1 existingView:(id)arg2;
- (id)_labelViewForElement:(id)arg1 existingView:(id)arg2;
- (id)_textBoxViewForElement:(id)arg1 existingView:(id)arg2;
- (id)_cardViewFromElement:(id)arg1 existingView:(id)arg2;
- (id)_listItemLockupWithElement:(id)arg1 existingView:(id)arg2;
- (id)_textViewWithElement:(id)arg1 existingView:(id)arg2;
- (void)_registerViewCreators;
- (id)init;

@end

