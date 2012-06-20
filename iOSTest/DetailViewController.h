//
//  DetailViewController.h
//  iOSTest
//
//  Created by Igor Zevaka on 30/05/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DeveloperModel;

@interface DetailViewController : UIViewController{
    IBOutlet UILabel *detailFirstName;
    IBOutlet UILabel *detailLastName;
    IBOutlet UILabel *detailDescription;
}

@property (strong, nonatomic) DeveloperModel *detailItem;



@end
