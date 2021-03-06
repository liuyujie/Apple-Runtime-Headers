//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class PKPass;

@interface PKEditPassesTableViewCell : UITableViewCell
{
    _Bool _showImage;
    _Bool _isRTL;
    PKPass *_pass;
}

+ (_Bool)needsFullPassImage;
+ (float)height;
+ (struct CGSize)imageSizeNeeded;
@property(nonatomic) _Bool showImage; // @synthesize showImage=_showImage;
@property(retain, nonatomic) PKPass *pass; // @synthesize pass=_pass;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGRect)imageFrameWithSize:(struct CGSize)arg1;
- (void)setImage:(id)arg1 forPass:(id)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1 showImage:(_Bool)arg2;

@end

