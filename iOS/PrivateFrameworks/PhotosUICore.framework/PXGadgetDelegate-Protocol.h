//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PXOneUpPresentation;

@protocol PXGadgetDelegate <NSObject>
- (_Bool)scrollGadgetToVisible:(id <PXGadget>)arg1 animated:(_Bool)arg2;
- (id <PXGridPresentation>)gridPresentation;
- (PXOneUpPresentation *)oneUpPresentation;
- (void)dismissGadgetViewController:(struct NSObject *)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)presentGadgetViewController:(struct NSObject *)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
- (_Bool)gadget:(id <PXGadget>)arg1 transitionToViewController:(struct NSObject *)arg2 animated:(_Bool)arg3 completion:(void (^)(void))arg4;

@optional
@property(nonatomic) __weak id <PXGadgetDelegate> nextGadgetResponder;
- (void)gadget:(id <PXGadget>)arg1 didChange:(unsigned long long)arg2;
- (void)gadget:(id <PXGadget>)arg1 animateChanges:(void (^)(void))arg2;
- (struct NSObject *)gadgetViewControllerHostingGadget:(id <PXGadget>)arg1;
@end

