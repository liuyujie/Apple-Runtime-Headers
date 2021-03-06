//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKUpNextBaseCell.h>

@class CLKFont, NSArray, NSLayoutConstraint, NTKColoringLabel, NTKUpNextImageView, UILayoutGuide;

@interface NTKUpNextThumbnailCell : NTKUpNextBaseCell
{
    UILayoutGuide *_labelLayoutGuide;
    UILayoutGuide *_imageLayoutGuide;
    NTKUpNextImageView *_imageView;
    NTKColoringLabel *_headerLabel;
    NTKColoringLabel *_descriptionLine1Label;
    NTKColoringLabel *_descriptionLine2Label;
    NTKColoringLabel *_descriptionLine3Label;
    CLKFont *_standardFont;
    CLKFont *_italicFont;
    CLKFont *_boldFont;
    NSArray *_withHeaderConstraints;
    NSArray *_withoutHeaderConstraints;
    NSArray *_withDescription2Constraints;
    NSArray *_withoutDescription2Constraints;
    NSArray *_withDescription3Constraints;
    NSArray *_withoutDescription3Constraints;
    NSLayoutConstraint *_imageLayoutGuideWidthConstraint;
    NSLayoutConstraint *_imageLayoutGuideHeightConstraint;
    _Bool _showingHeader;
    _Bool _showingThirdLine;
    _Bool _showingSmallThumbnail;
}

+ (struct CGSize)suggestedBodyImageSizeForDevice:(id)arg1;
- (void).cxx_destruct;
- (void)setPaused:(_Bool)arg1;
- (void)configureWithContent:(id)arg1;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

