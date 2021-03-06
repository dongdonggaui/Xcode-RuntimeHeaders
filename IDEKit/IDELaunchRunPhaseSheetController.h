/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEViewController.h>

#import "IDECapsuleListViewDataSource-Protocol.h"

@class DVTBorderedView, DVTChoice, DVTFilePathFieldCell, DVTNotificationToken, DVTObservingToken, DVTStackView_ML, DVTTabChooserView, IDEArgumentsCapsuleSheetController, IDECapsuleListView, IDEDebuggerSpecifier, IDEEnvironmentVariablesCapsuleSheetController, IDELaunchSchemeAction, IDEScheme, IDEWorkspace, NSArray, NSButtonCell, NSColor, NSMatrix, NSMutableArray, NSPopUpButton, NSTextField, NSTextView, NSView;

@interface IDELaunchRunPhaseSheetController : IDEViewController <IDECapsuleListViewDataSource>
{
    DVTTabChooserView *_tabChooser;
    IDECapsuleListView *_capsuleListView;
    DVTBorderedView *_optionsBorderedView;
    NSPopUpButton *_runnablePopUp;
    NSPopUpButton *_debuggerSelectionControl;
    NSMatrix *_debugProcessAsMatrix;
    NSButtonCell *_debugProcessAsMeButtonCell;
    NSMatrix *_launchStyleMatrix;
    NSButtonCell *_waitForAppToLaunchButtonCell;
    DVTFilePathFieldCell *_workingDirectoryTextFieldCell;
    NSView *_infoTabViewContentView;
    NSView *_diagnosticsTabViewContentView;
    NSPopUpButton *_macroExpansionRunnableBuildablesPopUp;
    NSTextField *_macroExpansionDescription;
    DVTStackView_ML *_optionsStackView;
    NSTextView *_customLaunchCommandsTextView;
    DVTChoice *_infoChoice;
    DVTChoice *_conditionsChoice;
    DVTChoice *_optionsChoice;
    DVTChoice *_diagnosticsChoice;
    DVTChoice *_debuggingChoice;
    BOOL _executableHasBeenSelected;
    BOOL _debuggerHasBeenSelected;
    BOOL _supportsDebugAsDifferentUser;
    NSColor *_descriptionTextColor;
    NSColor *_debugAsRootDescriptionTextColor;
    IDEScheme *_runContext;
    IDELaunchSchemeAction *_runPhase;
    int _launchStyleWhenDebuggerSetToNil;
    NSMutableArray *_launchActionViewControllers;
    BOOL _isSupportedApplicationData;
    BOOL _optionsUpdatedInCurrentRunLoop;
    DVTObservingToken *_runDestinationObservingToken;
    DVTObservingToken *_runnableBuildableProductsObservingToken;
    DVTObservingToken *_runContextRunnableObservingToken;
    DVTObservingToken *_debugAsEnablementObservingToken;
    DVTObservingToken *_tabChooserSelectionObservingToken;
    DVTObservingToken *_runPhaseObservingToken;
    DVTNotificationToken *_buildablesToken;
    IDEArgumentsCapsuleSheetController *_argumentsViewController;
    IDEEnvironmentVariablesCapsuleSheetController *_environmentVariablesViewController;
    NSArray *_debuggerSpecifiers;
    unsigned long long _runnablePopUpRunnableBuildableProductsCount;
    BOOL _runnablePopUpHasCustomRunnable;
}

+ (id)keyPathsForValuesAffectingLaunchStyleIsCustomLaunchCommands;
+ (void)initialize;
@property(retain, nonatomic) NSArray *debuggerSpecifiers; // @synthesize debuggerSpecifiers=_debuggerSpecifiers;
@property(retain) DVTTabChooserView *tabChooser; // @synthesize tabChooser=_tabChooser;
@property(copy) NSColor *debugAsRootDescriptionTextColor; // @synthesize debugAsRootDescriptionTextColor=_debugAsRootDescriptionTextColor;
@property(copy) NSColor *descriptionTextColor; // @synthesize descriptionTextColor=_descriptionTextColor;
@property BOOL supportsDebugAsDifferentUser; // @synthesize supportsDebugAsDifferentUser=_supportsDebugAsDifferentUser;
@property BOOL debuggerHasBeenSelected; // @synthesize debuggerHasBeenSelected=_debuggerHasBeenSelected;
@property BOOL executableHasBeenSelected; // @synthesize executableHasBeenSelected=_executableHasBeenSelected;
@property(retain) IDELaunchSchemeAction *runPhase; // @synthesize runPhase=_runPhase;
@property(retain) IDEScheme *runContext; // @synthesize runContext=_runContext;
- (void).cxx_destruct;
- (id)capsuleListView:(id)arg1 viewControllerForRow:(long long)arg2;
- (long long)numberOfObjectsInCapsuleListView:(id)arg1;
@property(readonly) IDEWorkspace *workspace;
- (id)DVTFilePathFieldCell:(id)arg1 resolvedPathForPath:(id)arg2;
- (void)DVTFilePathFieldCell:(id)arg1 chooserSelectedPath:(id)arg2;
- (void)_resetOptionsUpdatedFlag;
- (void)_updateSupportedOptions;
- (id)_allOptions;
- (void)_macroExpansionRunnableBuildableSelected:(id)arg1;
- (void)_updateMacroExpansionDescriptionForSelectedItem;
- (void)_updateMacroExpansionRunnablePopUpSelection;
- (void)_updateMacroExpansionRunnablePopUp;
- (void)_updateRunnablePopUp;
- (void)_runnableBuildableProductsDidChange;
- (void)_runDestinationChanged;
- (void)runnablePopUpAction:(id)arg1;
- (id)customLaunchCommandsFont;
- (BOOL)launchStyleIsCustomLaunchCommands;
- (void)chooseDebugProcessAs:(id)arg1;
- (void)_runPhaseRunnableChanged;
- (void)_runnableDidUpdate;
@property(retain) IDEDebuggerSpecifier *selectedDebuggerSpecifier;
- (void)_updateDebuggerPopUp:(id)arg1;
- (id)debuggerSpecifiersForCurrentPlatform;
- (void)_selectedSchemeChanged:(id)arg1;
- (void)primitiveInvalidate;
- (void)_invalidateOptionViews;
- (void)loadView;
- (void)_setupDebugOptions;
- (void)_updateDebugOptionsEnablement;
- (void)updateBoundContent;
- (void)updateBoundIDERunContextBinding;
- (id)dvtExtraBindings;

@end

