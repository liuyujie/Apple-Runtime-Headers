//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIDownloadedButton : UIButton
{
    VUITextLayout *_textLayout;
}

+ (id)downloadedButton;
@property(retain, nonatomic) VUITextLayout *textLayout; // @synthesize textLayout=_textLayout;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
