//
//  ViewController.swift
//  collectionview
//
//  Created by Rithwik Srikakolapu on 22/08/18.
//  Copyright © 2018 Rithwik Srikakolapu. All rights reserved.
//

import UIKit

class ViewController: UIViewController, UICollectionViewDataSource, UICollectionViewDelegate {
    
    let streamName = ["macOS","Android","Problem Solving","Data Science" ]
    
    let streamImage = [UIImage(named:"macoshero"),UIImage(named:"wjoel_180413_1777_android_001.1523625143"),UIImage(named:"Fotolia_76145133_XS.c"),UIImage(named:"head_bigdata")]
    
    let streamDescription = ["best of all streams","son of macOS","time pass",
                             "does this really exist?"]
    
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    func collectionView(_ collectionView: UICollectionView, numberOfItemsInSection section: Int) -> Int {
        return streamName.count
    }
    func collectionView(_ collectionView: UICollectionView, cellForItemAt indexPath: IndexPath) -> UICollectionViewCell {
        let cell = collectionView.dequeueReusableCell(withReuseIdentifier: "cell", for: indexPath) as! CollectionViewCell
        cell.sL.text = streamName[indexPath.row]
        cell.sI.image = streamImage[indexPath.row]
        cell.sD.text = streamDescription[indexPath.row]
        
        cell.contentView.layer.cornerRadius = 4.0
        cell.contentView.layer.borderWidth = 1.0
        cell.contentView.layer.borderColor = UIColor.clear.cgColor
        cell.contentView.layer.masksToBounds = false
        cell.layer.shadowColor = UIColor.gray.cgColor
        cell.layer.shadowOffset = CGSize(width: 0, height: 1.0)
        cell.layer.shadowRadius = 4.0
        cell.layer.shadowOpacity = 1.0
        cell.layer.masksToBounds = false
        cell.layer.shadowPath = UIBezierPath(roundedRect: cell.bounds, cornerRadius: cell.contentView.layer.cornerRadius).cgPath
        
        return cell
    }
    
    
    
    
}

