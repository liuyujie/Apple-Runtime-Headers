//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIButton, UIStackView;

__attribute__((visibility("hidden")))
@interface SFReaderAppearanceThemeSelectorTableViewCell : UITableViewCell
{
    UIStackView *_stackView;
    UIButton *_whiteButton;
    UIButton *_sepiaButton;
    UIButton *_grayButton;
    UIButton *_nightButton;
    id <SFReaderAppearanceThemeSelectorTableViewCellDelegate> _delegate;
    int _selectedTheme;
}

+ (float)requiredHeight;
@property(nonatomic) int selectedTheme; // @synthesize selectedTheme=_selectedTheme;
@property(nonatomic) __weak id <SFReaderAppearanceThemeSelectorTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_themeButtonAction:(id)arg1;
- (id)_themeButtonImageWithFillColor:(id)arg1 strokeColor:(id)arg2 selected:(_Bool)arg3;
- (id)_imageForTheme:(int)arg1 selected:(_Bool)arg2;
- (void)_createThemeButtons;
- (int)_themeForButton:(id)arg1;
- (id)_buttonForTheme:(int)arg1;
- (void)_changeSelectionForTheme:(int)arg1 selected:(_Bool)arg2;
- (void)_updateSelectedTheme;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

