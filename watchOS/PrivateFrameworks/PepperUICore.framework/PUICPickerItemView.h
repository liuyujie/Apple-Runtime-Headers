//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIImage, UIImageView, UILabel;

@interface PUICPickerItemView : UIView
{
    UILabel *_textLabel;
    UIImageView *_accessoryImageView;
    UIImageView *_contentImageView;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(copy, nonatomic) UIImage *contentImage; // @dynamic contentImage;
@property(copy, nonatomic) UIImage *accessoryImage; // @dynamic accessoryImage;
@property(copy, nonatomic) NSString *text; // @dynamic text;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

