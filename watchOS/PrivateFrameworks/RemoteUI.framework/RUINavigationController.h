//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

@interface RUINavigationController : UINavigationController
{
    unsigned int _ruiSupportedInterfaceOrientations;
    CDUnknownBlockType _menuDismissalHandler;
}

@property(copy, nonatomic) CDUnknownBlockType menuDismissalHandler; // @synthesize menuDismissalHandler=_menuDismissalHandler;
- (void).cxx_destruct;
- (_Bool)canBeShownFromSuspendedState;
- (void)_menuButtonPressed:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (unsigned int)supportedInterfaceOrientations;
- (void)setSupportedInterfaceOrientations:(unsigned int)arg1;

@end

